/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player v1.0
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        mods/deathmatch/logic/lua/CLuaFunctionDefs.Weapon.cpp
 *  PURPOSE:     Lua special server function definitions
 *
 *  IRan Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"
#include "CLuaFunctionDefs.h"
#include "CScriptArgReader.h"
#include "CStaticFunctionDefinitions.h"
#include "CWeaponNames.h"

#define MIN_SERVER_REQ_WEAPON_PROPERTY_FLAG                 "1.3.5-9.06139"

int CLuaFunctionDefs::SetWeaponAmmo(lua_State* luaVM)
{
    // bool setWeaponAmmo ( player thePlayer, int weapon, int totalAmmo, [int ammoInClip = 0] )
    CElement*      pElement;
    eWeaponType    weaponType;
    ushort         usAmmo;
    ushort         usAmmoInClip;
    CCustomWeapon* pWeapon = NULL;

    CScriptArgReader argStream(luaVM);
    argStream.ReadUserData(pElement);

    if (!argStream.HasErrors())
    {
        if (pElement->GetType() != CElement::WEAPON)
        {
            argStream.ReadEnumStringOrNumber(weaponType);
            argStream.ReadNumber(usAmmo);
            argStream.ReadNumber(usAmmoInClip, 0);

            if (!argStream.HasErrors())
            {
                if (CStaticFunctionDefinitions::SetWeaponAmmo(pElement, weaponType, usAmmo, usAmmoInClip))
                {
                    lua_pushboolean(luaVM, true);
                    return 1;
                }
            }
            else
                m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());
        }
        else
        {
            pWeapon = static_cast<CCustomWeapon*>(pElement);
            argStream.ReadNumber(usAmmo);

            if (!argStream.HasErrors())
            {
                if (CStaticFunctionDefinitions::SetWeaponAmmo(pWeapon, usAmmo))
                {
                    lua_pushboolean(luaVM, true);
                    return 1;
                }
            }
            else
                m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::GetWeaponNameFromID(lua_State* luaVM)
{
    unsigned char ucID;

    CScriptArgReader argStream(luaVM);
    argStream.ReadNumber(ucID);

    if (!argStream.HasErrors())
    {
        char szBuffer[256];
        if (CStaticFunctionDefinitions::GetWeaponNameFromID(ucID, szBuffer))
        {
            lua_pushstring(luaVM, szBuffer);
            return 1;
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::GetWeaponIDFromName(lua_State* luaVM)
{
    SString          strName = "";
    CScriptArgReader argStream(luaVM);
    argStream.ReadString(strName);

    if (!argStream.HasErrors())
    {
        unsigned char ucID;

        if (CStaticFunctionDefinitions::GetWeaponIDFromName(strName, ucID))
        {
            lua_pushnumber(luaVM, ucID);
            return 1;
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::CreateWeapon(lua_State* luaVM)
{
    CVector          vecPos;
    eWeaponType      weaponType;
    CScriptArgReader argStream(luaVM);
    argStream.ReadEnumStringOrNumber(weaponType);
    argStream.ReadVector3D(vecPos);

    if (!argStream.HasErrors())
    {
        CLuaMain* pLuaMain = m_pLuaManager->GetVirtualMachine(luaVM);
        if (pLuaMain)
        {
            CResource* pResource = pLuaMain->GetResource();
            if (pResource)
            {
                CCustomWeapon* pWeapon = CStaticFunctionDefinitions::CreateWeapon(pResource, weaponType, vecPos);
                if (pWeapon)
                {
                    CElementGroup* pGroup = pResource->GetElementGroup();
                    if (pGroup)
                    {
                        pGroup->Add((CElement*)pWeapon);
                    }

                    lua_pushelement(luaVM, pWeapon);
                    return 1;
                }
            }
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::FireWeapon(lua_State* luaVM)
{
    CCustomWeapon*   pWeapon;
    CScriptArgReader argStream(luaVM);
    argStream.ReadUserData(pWeapon);

    if (!argStream.HasErrors())
    {
        if (CStaticFunctionDefinitions::FireWeapon(pWeapon))
        {
            lua_pushboolean(luaVM, true);
            return 1;
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::SetWeaponState(lua_State* luaVM)
{
    CCustomWeapon*   pWeapon;
    eWeaponState     weaponState;
    CScriptArgReader argStream(luaVM);
    argStream.ReadUserData(pWeapon);
    argStream.ReadEnumString(weaponState);

    if (!argStream.HasErrors())
    {
        if (CStaticFunctionDefinitions::SetWeaponState(pWeapon, weaponState))
        {
            lua_pushboolean(luaVM, true);
            return 1;
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::GetWeaponState(lua_State* luaVM)
{
    CCustomWeapon*   pWeapon;
    eWeaponState     weaponState;
    CScriptArgReader argStream(luaVM);
    argStream.ReadUserData(pWeapon);

    if (!argStream.HasErrors())
    {
        weaponState = pWeapon->GetWeaponState();
        SString strValue = EnumToString(weaponState);
        lua_pushstring(luaVM, strValue);
        return 1;
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::SetWeaponTarget(lua_State* luaVM)
{
    CCustomWeapon*   pWeapon;
    CElement*        pTarget;
    CScriptArgReader argStream(luaVM);
    argStream.ReadUserData(pWeapon);
    if (argStream.NextIsUserData())
    {
        int targetBone;
        argStream.ReadUserData(pTarget);
        argStream.ReadNumber(targetBone, 255);
        if (!argStream.HasErrors())
        {
            if (CStaticFunctionDefinitions::SetWeaponTarget(pWeapon, pTarget, targetBone))
            {
                lua_pushboolean(luaVM, true);
                return 1;
            }
        }
    }
    else if (argStream.NextIsNumber())
    {
        CVector vecTarget;
        argStream.ReadVector3D(vecTarget);
        if (!argStream.HasErrors())
        {
            if (CStaticFunctionDefinitions::SetWeaponTarget(pWeapon, vecTarget))
            {
                lua_pushboolean(luaVM, true);
                return 1;
            }
        }
    }
    else if (argStream.NextIsNil())
    {
        if (!argStream.HasErrors())
        {
            if (CStaticFunctionDefinitions::ClearWeaponTarget(pWeapon))
            {
                lua_pushboolean(luaVM, true);
                return 1;
            }
        }
    }
    else
        argStream.SetCustomError("Expected element, number or nil at argument 2");

    if (argStream.HasErrors())
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::GetWeaponTarget(lua_State* luaVM)
{
    CCustomWeapon*   pWeapon;
    CElement*        pTarget;
    CVector          vecTarget;
    CScriptArgReader argStream(luaVM);
    argStream.ReadUserData(pWeapon);
    if (!argStream.HasErrors())
    {
        switch (pWeapon->GetTargetType())
        {
            case TARGET_TYPE_VECTOR:
                vecTarget = pWeapon->GetVectorTarget();
                lua_pushnumber(luaVM, vecTarget.fX);
                lua_pushnumber(luaVM, vecTarget.fY);
                lua_pushnumber(luaVM, vecTarget.fZ);
                return 3;
            case TARGET_TYPE_ENTITY:
                pTarget = pWeapon->GetElementTarget();
                lua_pushelement(luaVM, pTarget);
                return 1;
            case TARGET_TYPE_FIXED:
                lua_pushnil(luaVM);
                return 1;
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::GetWeaponOwner(lua_State* luaVM)
{
    CCustomWeapon*   pWeapon;
    CScriptArgReader argStream(luaVM);
    argStream.ReadUserData(pWeapon);
    if (!argStream.HasErrors())
    {
        CPlayer* pOwner = pWeapon->GetOwner();
        if (pOwner)
        {
            lua_pushelement(luaVM, pOwner);
            return 1;
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::SetWeaponOwner(lua_State* luaVM)
{
    CCustomWeapon*   pWeapon;
    CPlayer*         pPlayer;
    CScriptArgReader argStream(luaVM);
    argStream.ReadUserData(pWeapon);
    if (argStream.NextIsUserData())
    {
        argStream.ReadUserData(pPlayer);
        if (!argStream.HasErrors())
        {
            if (CStaticFunctionDefinitions::SetWeaponOwner(pWeapon, pPlayer))
            {
                lua_pushboolean(luaVM, true);
                return 1;
            }
        }
    }
    else if (argStream.NextIsNil())
    {
        if (!argStream.HasErrors())
        {
            if (CStaticFunctionDefinitions::SetWeaponOwner(pWeapon, NULL))
            {
                lua_pushboolean(luaVM, true);
                return 1;
            }
        }
    }
    if (argStream.HasErrors())
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushnil(luaVM);
    return 1;
}

int CLuaFunctionDefs::SetWeaponFlags(lua_State* luaVM)
{
    CCustomWeapon*    pWeapon = NULL;
    SLineOfSightFlags flags;
    eWeaponFlags      flag;
    CScriptArgReader  argStream(luaVM);
    argStream.ReadUserData(pWeapon);
    argStream.ReadEnumString(flag);
    if (!argStream.HasErrors())
    {
        if (flag != WEAPONFLAGS_FLAGS)
        {
            bool bData;
            argStream.ReadBool(bData);
            if (CStaticFunctionDefinitions::SetWeaponFlags(pWeapon, flag, bData))
            {
                lua_pushboolean(luaVM, bData);
                return 1;
            }
        }
        else
        {
            argStream.ReadBool(flags.bCheckBuildings);
            argStream.ReadBool(flags.bCheckCarTires);
            argStream.ReadBool(flags.bCheckDummies);
            argStream.ReadBool(flags.bCheckObjects);
            argStream.ReadBool(flags.bCheckPeds);
            argStream.ReadBool(flags.bCheckVehicles);
            argStream.ReadBool(flags.bSeeThroughStuff);
            argStream.ReadBool(flags.bShootThroughStuff);
            if (!argStream.HasErrors())
            {
                if (CStaticFunctionDefinitions::SetWeaponFlags(pWeapon, flags))
                {
                    lua_pushboolean(luaVM, true);
                }
            }
        }
    }
    if (argStream.HasErrors())
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::GetWeaponFlags(lua_State* luaVM)
{
    CCustomWeapon*    pWeapon = NULL;
    SLineOfSightFlags flags;
    eWeaponFlags      flag;
    bool              bData;
    CScriptArgReader  argStream(luaVM);
    argStream.ReadUserData(pWeapon);
    argStream.ReadEnumString(flag);
    if (!argStream.HasErrors())
    {
        if (flag != WEAPONFLAGS_FLAGS)
        {
            if (CStaticFunctionDefinitions::GetWeaponFlags(pWeapon, flag, bData))
            {
                lua_pushboolean(luaVM, bData);
                return 1;
            }
        }
        else
        {
            if (CStaticFunctionDefinitions::GetWeaponFlags(pWeapon, flags))
            {
                lua_pushboolean(luaVM, flags.bCheckBuildings);
                lua_pushboolean(luaVM, flags.bCheckCarTires);
                lua_pushboolean(luaVM, flags.bCheckDummies);
                lua_pushboolean(luaVM, flags.bCheckObjects);
                lua_pushboolean(luaVM, flags.bCheckPeds);
                lua_pushboolean(luaVM, flags.bCheckVehicles);
                lua_pushboolean(luaVM, flags.bSeeThroughStuff);
                lua_pushboolean(luaVM, flags.bShootThroughStuff);
                return 8;
            }
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::SetWeaponFiringRate(lua_State* luaVM)
{
    CCustomWeapon*   pWeapon = NULL;
    int              iFiringRate = 0;
    CScriptArgReader argStream(luaVM);
    argStream.ReadUserData(pWeapon);
    argStream.ReadNumber(iFiringRate);

    if (!argStream.HasErrors())
    {
        if (CStaticFunctionDefinitions::SetWeaponFiringRate(pWeapon, iFiringRate))
        {
            lua_pushboolean(luaVM, true);
            return 1;
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::GetWeaponFiringRate(lua_State* luaVM)
{
    CCustomWeapon*   pWeapon = NULL;
    int              iFiringRate = 0;
    CScriptArgReader argStream(luaVM);
    argStream.ReadUserData(pWeapon);

    if (!argStream.HasErrors())
    {
        if (CStaticFunctionDefinitions::GetWeaponFiringRate(pWeapon, iFiringRate))
        {
            lua_pushnumber(luaVM, iFiringRate);
            return 1;
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::ResetWeaponFiringRate(lua_State* luaVM)
{
    CCustomWeapon*   pWeapon = NULL;
    CScriptArgReader argStream(luaVM);
    argStream.ReadUserData(pWeapon);

    if (!argStream.HasErrors())
    {
        if (CStaticFunctionDefinitions::ResetWeaponFiringRate(pWeapon))
        {
            lua_pushboolean(luaVM, true);
            return 1;
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::GetWeaponClipAmmo(lua_State* luaVM)
{
    CCustomWeapon*   pWeapon = NULL;
    int              iClipAmmo = 0;
    CScriptArgReader argStream(luaVM);
    argStream.ReadUserData(pWeapon);

    if (!argStream.HasErrors())
    {
        if (CStaticFunctionDefinitions::GetWeaponClipAmmo(pWeapon, iClipAmmo))
        {
            lua_pushnumber(luaVM, iClipAmmo);
            return 1;
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::GetWeaponAmmo(lua_State* luaVM)
{
    CCustomWeapon*   pWeapon = NULL;
    int              iAmmo = 0;
    CScriptArgReader argStream(luaVM);
    argStream.ReadUserData(pWeapon);

    if (!argStream.HasErrors())
    {
        if (CStaticFunctionDefinitions::GetWeaponAmmo(pWeapon, iAmmo))
        {
            lua_pushnumber(luaVM, iAmmo);
            return 1;
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::SetWeaponClipAmmo(lua_State* luaVM)
{
    CCustomWeapon*   pWeapon = NULL;
    int              iAmmo = 0;
    CScriptArgReader argStream(luaVM);
    argStream.ReadUserData(pWeapon);
    argStream.ReadNumber(iAmmo);

    if (!argStream.HasErrors())
    {
        if (CStaticFunctionDefinitions::SetWeaponClipAmmo(pWeapon, iAmmo))
        {
            lua_pushboolean(luaVM, true);
            return 1;
        }
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::GetSlotFromWeapon(lua_State* luaVM)
{
    eWeaponType      weaponType;
    CScriptArgReader argStream(luaVM);
    argStream.ReadEnumStringOrNumber(weaponType);

    if (!argStream.HasErrors())
    {
        char cSlot = CWeaponNames::GetSlotFromWeapon(weaponType);
        if (cSlot >= 0)
            lua_pushnumber(luaVM, cSlot);
        else
            lua_pushboolean(luaVM, false);
        return 1;
    }
    else
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::SetWeaponProperty(lua_State* luaVM)
{
    //  bool setWeaponProperty ( int weaponID/string weaponName, string weaponSkill, string property/int property, int/float theValue )

    eWeaponSkill    eWepSkill = WEAPONSKILL_STD;
    eWeaponType     eWep = WEAPONTYPE_BRASSKNUCKLE;
    eWeaponProperty eProp = WEAPON_ACCURACY;

    CScriptArgReader argStream(luaVM);
    if (argStream.NextIsUserData())
    {
        CCustomWeapon*   pWeapon;
        eWeaponProperty  weaponProperty;
        CScriptArgReader argStream(luaVM);
        argStream.ReadUserData(pWeapon);
        argStream.ReadEnumString(weaponProperty);

        if (!argStream.HasErrors())
        {
            if (weaponProperty == WEAPON_DAMAGE)
            {
                short sData = 0;
                argStream.ReadNumber(sData);
                if (!argStream.HasErrors())
                {
                    if (CStaticFunctionDefinitions::SetWeaponProperty(pWeapon, weaponProperty, sData))
                    {
                        lua_pushboolean(luaVM, true);
                        return 1;
                    }
                }
            }
            else
            {
                float fData = 0.0f;
                argStream.ReadNumber(fData);
                if (!argStream.HasErrors())
                {
                    if (CStaticFunctionDefinitions::SetWeaponProperty(pWeapon, weaponProperty, fData))
                    {
                        lua_pushboolean(luaVM, true);
                        return 1;
                    }
                }
            }
        }
        if (argStream.HasErrors())
            m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());
    }
    else
    {
        argStream.ReadEnumStringOrNumber(eWep);
        argStream.ReadEnumStringOrNumber(eWepSkill);
        argStream.ReadEnumString(eProp);
        if (!argStream.HasErrors())
        {
            switch (eProp)
            {
                case WEAPON_WEAPON_RANGE:
                case WEAPON_TARGET_RANGE:
                case WEAPON_ACCURACY:
                case WEAPON_MOVE_SPEED:
                case WEAPON_ANIM_LOOP_START:
                case WEAPON_ANIM_LOOP_STOP:
                case WEAPON_ANIM_LOOP_RELEASE_BULLET_TIME:
                case WEAPON_ANIM2_LOOP_START:
                case WEAPON_ANIM2_LOOP_STOP:
                case WEAPON_ANIM2_LOOP_RELEASE_BULLET_TIME:
                case WEAPON_ANIM_BREAKOUT_TIME:
                {
                    float fWeaponInfo = 0.0f;
                    argStream.ReadNumber(fWeaponInfo);
                    if (!argStream.HasErrors())
                    {
                        if (CStaticFunctionDefinitions::SetWeaponProperty(eProp, eWep, eWepSkill, fWeaponInfo))
                        {
                            lua_pushboolean(luaVM, true);
                            return 1;
                        }
                    }
                    break;
                }
                case WEAPON_DAMAGE:
                case WEAPON_MAX_CLIP_AMMO:
                case WEAPON_FLAGS:
                {
                    int sWeaponInfo = 0;
                    argStream.ReadNumber(sWeaponInfo);
                    if (!argStream.HasErrors())
                    {
                        if (CStaticFunctionDefinitions::SetWeaponProperty(eProp, eWep, eWepSkill, sWeaponInfo))
                        {
                            lua_pushboolean(luaVM, true);
                            return 1;
                        }
                    }
                    break;
                }
                case WEAPON_FLAG_AIM_NO_AUTO:
                case WEAPON_FLAG_AIM_ARM:
                case WEAPON_FLAG_AIM_1ST_PERSON:
                case WEAPON_FLAG_AIM_FREE:
                case WEAPON_FLAG_MOVE_AND_AIM:
                case WEAPON_FLAG_MOVE_AND_SHOOT:
                case WEAPON_FLAG_TYPE_THROW:
                case WEAPON_FLAG_TYPE_HEAVY:
                case WEAPON_FLAG_TYPE_CONSTANT:
                case WEAPON_FLAG_TYPE_DUAL:
                case WEAPON_FLAG_ANIM_RELOAD:
                case WEAPON_FLAG_ANIM_CROUCH:
                case WEAPON_FLAG_ANIM_RELOAD_LOOP:
                case WEAPON_FLAG_ANIM_RELOAD_LONG:
                case WEAPON_FLAG_SHOT_SLOWS:
                case WEAPON_FLAG_SHOT_RAND_SPEED:
                case WEAPON_FLAG_SHOT_ANIM_ABRUPT:
                case WEAPON_FLAG_SHOT_EXPANDS:
                {
                    MinServerReqCheck(argStream, MIN_SERVER_REQ_WEAPON_PROPERTY_FLAG, "flag name is being used");
                    bool bEnable;
                    argStream.ReadBool(bEnable);
                    if (!argStream.HasErrors())
                    {
                        if (CStaticFunctionDefinitions::SetWeaponPropertyFlag(eProp, eWep, eWepSkill, bEnable))
                        {
                            lua_pushboolean(luaVM, true);
                            return 1;
                        }
                    }
                    break;
                }

                default:
                {
                    argStream.SetCustomError("unsupported weapon property at argument 3");
                    break;
                }
            }
        }
        if (argStream.HasErrors())
            m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());
    }
    // Failed
    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::GetWeaponProperty(lua_State* luaVM)
{
    //  int getWeaponProperty ( int weaponID/string weaponName, string weaponSkill, string property )

    eWeaponSkill    eWepSkill = WEAPONSKILL_STD;
    eWeaponType     eWep = WEAPONTYPE_UNARMED;
    eWeaponProperty eProp = WEAPON_INVALID_PROPERTY;

    CScriptArgReader argStream(luaVM);
    argStream.ReadEnumStringOrNumber(eWep);
    argStream.ReadEnumStringOrNumber(eWepSkill);
    argStream.ReadEnumString(eProp);
    if (!argStream.HasErrors())
    {
        switch (eProp)
        {
            case WEAPON_WEAPON_RANGE:
            case WEAPON_TARGET_RANGE:
            case WEAPON_ACCURACY:
            case WEAPON_FIRING_SPEED:
            case WEAPON_LIFE_SPAN:
            case WEAPON_SPREAD:
            case WEAPON_MOVE_SPEED:
                // Get only
            case WEAPON_REQ_SKILL_LEVEL:
            case WEAPON_ANIM_LOOP_START:
            case WEAPON_ANIM_LOOP_STOP:
            case WEAPON_ANIM_LOOP_RELEASE_BULLET_TIME:
            case WEAPON_ANIM2_LOOP_START:
            case WEAPON_ANIM2_LOOP_STOP:
            case WEAPON_ANIM2_LOOP_RELEASE_BULLET_TIME:
            case WEAPON_ANIM_BREAKOUT_TIME:
            case WEAPON_RADIUS:
            {
                float fWeaponInfo = 0.0f;

                if (CStaticFunctionDefinitions::GetWeaponProperty(eProp, eWep, eWepSkill, fWeaponInfo))
                {
                    lua_pushnumber(luaVM, fWeaponInfo);
                    return 1;
                }
                break;
            }
            case WEAPON_DAMAGE:
            case WEAPON_MAX_CLIP_AMMO:
            case WEAPON_FLAGS:
            case WEAPON_ANIM_GROUP:
            case WEAPON_FIRETYPE:
            case WEAPON_MODEL:
            case WEAPON_MODEL2:
            case WEAPON_SLOT:
            case WEAPON_AIM_OFFSET:
            case WEAPON_SKILL_LEVEL:
            case WEAPON_DEFAULT_COMBO:
            case WEAPON_COMBOS_AVAILABLE:
            {
                int sWeaponInfo = 0;

                if (CStaticFunctionDefinitions::GetWeaponProperty(eProp, eWep, eWepSkill, sWeaponInfo))
                {
                    lua_pushinteger(luaVM, sWeaponInfo);
                    return 1;
                }
                break;
            }
            case WEAPON_FIRE_OFFSET:
            {
                CVector vecWeaponInfo;

                if (CStaticFunctionDefinitions::GetWeaponProperty(eProp, eWep, eWepSkill, vecWeaponInfo))
                {
                    lua_pushnumber(luaVM, vecWeaponInfo.fX);
                    lua_pushnumber(luaVM, vecWeaponInfo.fY);
                    lua_pushnumber(luaVM, vecWeaponInfo.fZ);
                    return 3;
                }
                break;
            }
            case WEAPON_FLAG_AIM_NO_AUTO:
            case WEAPON_FLAG_AIM_ARM:
            case WEAPON_FLAG_AIM_1ST_PERSON:
            case WEAPON_FLAG_AIM_FREE:
            case WEAPON_FLAG_MOVE_AND_AIM:
            case WEAPON_FLAG_MOVE_AND_SHOOT:
            case WEAPON_FLAG_TYPE_THROW:
            case WEAPON_FLAG_TYPE_HEAVY:
            case WEAPON_FLAG_TYPE_CONSTANT:
            case WEAPON_FLAG_TYPE_DUAL:
            case WEAPON_FLAG_ANIM_RELOAD:
            case WEAPON_FLAG_ANIM_CROUCH:
            case WEAPON_FLAG_ANIM_RELOAD_LOOP:
            case WEAPON_FLAG_ANIM_RELOAD_LONG:
            case WEAPON_FLAG_SHOT_SLOWS:
            case WEAPON_FLAG_SHOT_RAND_SPEED:
            case WEAPON_FLAG_SHOT_ANIM_ABRUPT:
            case WEAPON_FLAG_SHOT_EXPANDS:
            {
                MinServerReqCheck(argStream, MIN_SERVER_REQ_WEAPON_PROPERTY_FLAG, "flag name is being used");
                if (!argStream.HasErrors())
                {
                    bool bEnable;
                    if (CStaticFunctionDefinitions::GetWeaponPropertyFlag(eProp, eWep, eWepSkill, bEnable))
                    {
                        lua_pushboolean(luaVM, bEnable);
                        return 1;
                    }
                }
                break;
            }
            default:
            {
                argStream.SetCustomError("invalid weapon property at argument 3");
                break;
            }
        }
    }
    if (argStream.HasErrors())
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    // Failed
    lua_pushboolean(luaVM, false);
    return 1;
}

int CLuaFunctionDefs::GetOriginalWeaponProperty(lua_State* luaVM)
{
    eWeaponSkill    eWepSkill = WEAPONSKILL_STD;
    eWeaponType     eWep = WEAPONTYPE_UNARMED;
    eWeaponProperty eProp = WEAPON_INVALID_PROPERTY;

    CScriptArgReader argStream(luaVM);
    argStream.ReadEnumStringOrNumber(eWep);
    argStream.ReadEnumStringOrNumber(eWepSkill);
    argStream.ReadEnumString(eProp);
    if (!argStream.HasErrors())
    {
        switch (eProp)
        {
            case WEAPON_WEAPON_RANGE:
            case WEAPON_TARGET_RANGE:
            case WEAPON_ACCURACY:
            case WEAPON_FIRING_SPEED:
            case WEAPON_LIFE_SPAN:
            case WEAPON_SPREAD:
            case WEAPON_MOVE_SPEED:
                // Get only
            case WEAPON_REQ_SKILL_LEVEL:
            case WEAPON_ANIM_LOOP_START:
            case WEAPON_ANIM_LOOP_STOP:
            case WEAPON_ANIM_LOOP_RELEASE_BULLET_TIME:
            case WEAPON_ANIM2_LOOP_START:
            case WEAPON_ANIM2_LOOP_STOP:
            case WEAPON_ANIM2_LOOP_RELEASE_BULLET_TIME:
            case WEAPON_ANIM_BREAKOUT_TIME:
            case WEAPON_RADIUS:
            {
                float fWeaponInfo = 0.0f;

                if (CStaticFunctionDefinitions::GetOriginalWeaponProperty(eProp, eWep, eWepSkill, fWeaponInfo))
                {
                    lua_pushnumber(luaVM, fWeaponInfo);
                    return 1;
                }
                break;
            }
            case WEAPON_DAMAGE:
            case WEAPON_MAX_CLIP_AMMO:
            case WEAPON_FLAGS:
            case WEAPON_ANIM_GROUP:
            case WEAPON_FIRETYPE:
            case WEAPON_MODEL:
            case WEAPON_MODEL2:
            case WEAPON_SLOT:
            case WEAPON_AIM_OFFSET:
            case WEAPON_SKILL_LEVEL:
            case WEAPON_DEFAULT_COMBO:
            case WEAPON_COMBOS_AVAILABLE:
            {
                int sWeaponInfo = 0;

                if (CStaticFunctionDefinitions::GetOriginalWeaponProperty(eProp, eWep, eWepSkill, sWeaponInfo))
                {
                    lua_pushinteger(luaVM, sWeaponInfo);
                    return 1;
                }
                break;
            }
            case WEAPON_FIRE_OFFSET:
            {
                CVector vecWeaponInfo;

                if (CStaticFunctionDefinitions::GetOriginalWeaponProperty(eProp, eWep, eWepSkill, vecWeaponInfo))
                {
                    lua_pushnumber(luaVM, vecWeaponInfo.fX);
                    lua_pushnumber(luaVM, vecWeaponInfo.fY);
                    lua_pushnumber(luaVM, vecWeaponInfo.fZ);
                    return 3;
                }
                break;
            }
            case WEAPON_FLAG_AIM_NO_AUTO:
            case WEAPON_FLAG_AIM_ARM:
            case WEAPON_FLAG_AIM_1ST_PERSON:
            case WEAPON_FLAG_AIM_FREE:
            case WEAPON_FLAG_MOVE_AND_AIM:
            case WEAPON_FLAG_MOVE_AND_SHOOT:
            case WEAPON_FLAG_TYPE_THROW:
            case WEAPON_FLAG_TYPE_HEAVY:
            case WEAPON_FLAG_TYPE_CONSTANT:
            case WEAPON_FLAG_TYPE_DUAL:
            case WEAPON_FLAG_ANIM_RELOAD:
            case WEAPON_FLAG_ANIM_CROUCH:
            case WEAPON_FLAG_ANIM_RELOAD_LOOP:
            case WEAPON_FLAG_ANIM_RELOAD_LONG:
            case WEAPON_FLAG_SHOT_SLOWS:
            case WEAPON_FLAG_SHOT_RAND_SPEED:
            case WEAPON_FLAG_SHOT_ANIM_ABRUPT:
            case WEAPON_FLAG_SHOT_EXPANDS:
            {
                MinServerReqCheck(argStream, MIN_SERVER_REQ_WEAPON_PROPERTY_FLAG, "flag name is being used");
                if (!argStream.HasErrors())
                {
                    bool bEnable;
                    if (CStaticFunctionDefinitions::GetOriginalWeaponPropertyFlag(eProp, eWep, eWepSkill, bEnable))
                    {
                        lua_pushboolean(luaVM, bEnable);
                        return 1;
                    }
                }
                break;
            }
            default:
            {
                argStream.SetCustomError("unsupported weapon property at argument 3");
                break;
            }
        }
    }
    if (argStream.HasErrors())
        m_pScriptDebugging->LogCustom(luaVM, argStream.GetFullErrorMessage());

    // Failed
    lua_pushboolean(luaVM, false);
    return 1;
}
