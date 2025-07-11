/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        core/CCredits.cpp
 *  PURPOSE:     In-game credits window implementation
 *
 *  Iran Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#include "StdInc.h"

extern CCore* g_pCore;

namespace CCreditsGUI
{
    float fWindowX = 560.0f;
    float fWindowY = 300.0f;
}            // namespace CCreditsGUI
using namespace CCreditsGUI;

CCredits::CCredits()
{
    CGUI* pManager = g_pCore->GetGUI();

    // Define our credits string
    m_strCredits += "Grand Theft Auto: San Andreas (TM) (c) 2005 Rockstar Games, Inc.\n\n\n";

    m_strCredits += "== Iran Multi Player: San Andreas v" MTA_DM_BUILDTAG_SHORT
                    " ==\n"
                    "\n";

    m_strCredits += _("Programming");
    m_strCredits +=
        "\n\n"

        "Alberto \"ryden\" Alonso\n"
        "Marcus \"mabako\" Bauer\n"
        "Hendrik \"arc_\" van den Berge\n"
        "Stanislav \"lil_Toady\" Bobrov\n"
        "Dan \"Talidan\" Chowdhury\n"
        "Chris \"ccw\" Cockwanger\n"
        "Adge \"Jax\" Cutler\n"
        "Cecill \"ijs\" Etheredge\n"
        "Danish \"Saml1er\" Khan\n"
        "Marek \"botder\" Kulik\n"
        "Sebas \"x86\" Lamers\n"
        "Raphael \"Mr.Hankey\" Leiteritz\n"
        "Ed \"eAi\" Lyons\n"
        "Christian \"ChrML\" Myhre Lundheim\n"
        "Qais \"qaisjp\" Patankar\n"
        "Arushan \"aru\" Raj\n"
        "Frank \"Aim\" Spijkerman\n"
        "Pascal \"sbx320\" Stücker\n"
        "Kevin \"Kevuwk\" Whiteside\n"
        "Richard \"Cazomino05\" Whitlock\n"
        "Gamesnert\n"
        "Jusonex\n"
        "\n"
        "\n";

    m_strCredits += _("Contributors");
    m_strCredits +=
        "\n\n"

        "Patrik \"Pirulax\" Jankovics-Szmolenicki\n"
        "Patrik \"myonlake\" Juvonen\n"
        "Uladzislau \"TheNormalnij\" Nikalayevich\n"
        "Nikita \"StrixG\" Obrecht\n"
        "Arran\n"
        "colistro123\n"
        "impulze\n"
        "Iztas\n"
        "JoeBullet\n"
        "lopezloo\n"
        "Lpsd\n"
        "MX_Master\n"
        "Remp\n"
        "SugarD-x\n"
        "\n"
        "\n";

    m_strCredits += _("Game Design / Scripting");
    m_strCredits +=
        "\n\n"

        "John \"Johnline\" Borsberry\n"
        "Paul \"Brophy\" Brophy\n"
        "Maciej \"MACK\" Cieslak\n"
        "Jacek \"jhxp\" Halas vel Lagoda\n"
        "Brad \"Slothman\" Hammond\n"
        "Norbert \"norby89\" Juhos\n"
        "Kris \"KWKSND\" Kulchisky\n"
        "Dustin \"Ransom\" Morren\n"
        "Dutchman101\n"
        "erorr404\n"
        "Synecy\n"
        "\n"
        "\n";

    if (g_pLocalization->IsLocalized() && !g_pLocalization->GetTranslators().empty())
    {
        m_strCredits += _("Language Localization");
        m_strCredits += "\n\n";
        m_strCredits += g_pLocalization->GetTranslators();
        m_strCredits += "\n\n\n";
    }

    m_strCredits += _("Patch contributors");
    m_strCredits +=
        "\n\n"

        "Enes \"cleopatra\" Akıllıok\n"
        "Nawaf \"xLive\" Alqarni\n"
        "Nicolás \"Platin\" Barrios\n"
        "Efe \"efex\" Batır\n"
        "Amine \"UndR\" Bidah\n"
        "Lukasz \"W\" Biegaj\n"
        "Pacal \"buepas\" Buerklin\n"
        "Florian \"Flobu\" Busse\n"
        "Emiliano \"Sasu\" Castro\n"
        "Breno \"iDannz\" Danyel\n"
        "Callum \"Callum\" Dawson\n"
        "Pieter \"pieT\" Dewachter\n"
        "Mateusz \"Allerek\" Domińczak\n"
        "Philip \"Fenix\" Farquharson\n"
        "Seweryn \"Neproify\" Figura\n"
        "Alejandro \"AlexTMjugador\" González\n"
        "Kevin \"ciber96\" Gross\n"
        "Robin \"robhol\" Holm\n"
        "Bob \"NanoBob\" van Hooff\n"
        "Sebastian \"CrosRoad95\" Jura\n"
        "Daniel \"arfni\" Keller\n"
        "Gabrielius \"Dezash\" Laurinavičius\n"
        "John \"jlillis\" Lillis\n"
        "Kamil \"forkerer\" Marciniak\n"
        "Tete \"Tete\" Omar\n"
        "Marcin \"FileEX\" Pawlicki\n"
        "Ali \"Haxardous\" Qamber\n"
        "Sam \"samr46\" R.\n"
        "Fernando Rocha\n"
        "Fedor \"Ted\" Sinev\n"
        "Jordy \"MegadreamsBE\" Sleeubus\n"
        "Simon \"Simi23\" Tamás\n"
        "Adam \"50p\" Telega\n"
        "Ilya \"Kenix\" Volkov\n"
        "AboShanab\n"
        "Addlibs\n"
        "AfuSensi\n"
        "AleksCore\n"
        "AlιAѕѕaѕѕιN\n"
        "androksi\n"
        "ApeLsiN4eG\n"
        "asturel\n"
        "Audifire\n"
        "BCG2000\n"
        "Bonus1702\n"
        "correaAlex\n"
        "CubedDeath\n"
        "DarkDrifter Nacim\n"
        "Deihim007\n"
        "delinx\n"
        "DetectedStorm\n"
        "DirtY_iCE\n"
        "Disinterpreter\n"
        "Dragon\n"
        "drop-club\n"
        "dvarnai\n"
        "Einheit-101\n"
        "emre1702\n"
        "Fabio(GNR)\n"
        "fastman92\n"
        "FrankZZ\n"
        "Gothem\n"
        "GRascm\n"
        "gta191977649\n"
        "GTX / Timic3\n"
        "guix\n"
        "Inder00\n"
        "JessePinkman\n"
        "JeViCo\n"
        "John_Michael\n"
        "JR10\n"
        "Kayl\n"
        "knitz12\n"
        "LarSoWiTsH\n"
        "Lex128\n"
        "Lokote1998\n"
        "Loooop\n"
        "Lordmau5\n"
        "LosFaul\n"
        "lucasc190\n"
        "lyncon\n"
        "MCvarial\n"
        "Merlin\n"
        "mickdermack\n"
        "Mvrat\n"
        "NeO_D-Power\n"
        "Patrick2562\n"
        "PauloKim1246\n"
        "Pawelo / 4O4\n"
        "pentaflops\n"
        "PerikiyoXD\n"
        "PhrozenByte\n"
        "rafalh\n"
        "samt2497\n"
        "Santi\n"
        "Sarrum\n"
        "SDraw\n"
        "se16n\n"
        "Sergeanur\n"
        "-ffs-Sniper\n"
        "STR6\n"
        "TAPL-93\n"
        "TEDERIs\n"
        "TFP-dev\n"
        "Totto8492\n"
        "Tracer\n"
        "turret001\n"
        "tvc\n"
        "vahook\n"
        "vyn666\n"
        "x0rh4x\n"
        "xerox8521\n"
        "[GP_A]XetaQuake\n"
        "xLuxy\n"
        "Zango\n"
        "zneext\n"
        "ZReC\n"
        "\n"
        "\n";

    m_strCredits += _("Special Thanks");
    m_strCredits +=
        "\n\n"

        "Derek \"slush\" Abdine\n"
        "Mertcan \"Rocketbunny\" Aydoğmuş\n"
        "Jordan \"Woovie\" Banasik\n"
        "Javier \"jbeta\" Beta\n"
        "Oliver \"Oli\" Brown\n"
        "Emiliano \"Sasu\" Castro\n"
        "Wojciech \"Wojjie\" Hlibowicki\n"
        "Chris \"Cray\" McArthur\n"
        "Rob \"Sugar Daddy\" Pooley\n"
        "max \"Hobo Pie\" Power\n"
        "Hans \"Blokker\" Roes\n"
        "Kent \"Kent747\" Simon\n"
        "Matthew \"Towncivilian\" Wolfe\n"
        "Adamix\n"
        "Aibo\n"
        "diegofkda\n"
        "headfonez\n"
        "leetIbrahim\n"
        "Phatlooser\n"
        "Pugwipe\n"
        "Ren712\n"
        "StifflersMom\n"
        "The_GTA\n"
        "trx\n"
        "\n"
        "\n";

    m_strCredits += _("This software and project makes use of the following libraries and software:");
    m_strCredits +=
        "\n"
        "1Password (https://1password.com/)\n"
        "BASS (https://www.un4seen.com/bass.html)\n"
        "bcrypt (https://www.openwall.com/crypt/)\n"
        "breakpad (https://chromium.googlesource.com/breakpad/breakpad/)\n"
        "bzip2 (http://www.bzip.org/)\n"
        "CEF (https://bitbucket.org/chromiumembedded/cef/)\n"
        "CEGUI (http://cegui.org.uk/)\n"
        "Cloudflare (https://www.cloudflare.com/)\n"
        "CRC-32 (https://bochs.sourceforge.io/)\n"
        "Crowdin (https://crowdin.com/)\n"
        "cryptopp (https://cryptopp.com/)\n"
        "cURL (https://curl.se/)\n"
        "Detours (https://github.com/microsoft/Detours)\n"
        "Discord (https://discord.com/)\n"
        "Docker (https://www.docker.com/)\n"
        "Embedded HTTP Server (https://ehs.fritz-elfert.de/)\n"
        "FreeType (https://freetype.org/)\n"
        "GNU Unifont (https://unifoundry.com/unifont/index.html)\n"
        "inspect.lua by kikito (https://github.com/kikito/inspect.lua)\n"
        "json-c (https://github.com/json-c/json-c)\n"
        "GitBook (https://www.gitbook.com/)\n"
        "GitHub (https://github.com/)\n"
        "ksignals (https://github.com/xforce/ksignals)\n"
        "libjpeg (https://libjpeg.sourceforge.net/)\n"
        "libpcre (https://www.pcre.org/)\n"
        "libpng (http://www.libpng.org/)\n"
        "Lua (https://www.lua.org/)\n"
        "lunasvg (https://github.com/sammycage/lunasvg)\n"
        "mbedtls (https://github.com/Mbed-TLS/mbedtls)\n"
        "MediaWiki (https://www.mediawiki.org/wiki/MediaWiki)\n"
        "minizip (https://www.winimage.com/zLibDll/minizip.html)\n"
        "mysql-connector-c (https://downloads.mysql.com/archives/c-c/)\n"
        "nvapi (https://developer.nvidia.com/rtx/path-tracing/nvapi/get-started)\n"
        "Open Collective (https://opencollective.com/)\n"
        "pme by Zac Hansen\n"
        "PortAudio (http://www.portaudio.com/)\n"
        "pthreads-win32 (https://sourceware.org/pthreads-win32/)\n"
        "RakNet (http://www.jenkinssoftware.com/)\n"
        "SA Limit adjuster source code (Credits to Sacky)\n"
        "sparsehash (https://github.com/sparsehash/sparsehash)\n"
        "speex (https://www.speex.org/)\n"
        "SQLite (https://www.sqlite.org/)\n"
        "TeamCity by JetBrains (https://www.jetbrains.com/teamcity/)\n"
        "Teleport (https://goteleport.com/)\n"
        "The Language Icon by A’ Design Award & Competition, Onur Müştak Çobanlı and\nFarhat Datta (https://www.languageicon.org)\n"
        "tinygettext (https://github.com/tinygettext/tinygettext/)\n"
        "tinyxml (https://sourceforge.net/projects/tinyxml/)\n"
        "UnRAR (https://www.rarlab.com/)\n"
        "zlib (https://zlib.net/)\n";


    // SA credits
    m_strCredits += "\n\n\n== Grand Theft Auto: San Andreas (TM) (c) 2005 Rockstar Games, Inc. ==\n\n\n";

    m_strCredits +=
        "Rockstar North\n\n"
        "\n\nProducer\n\n"
        "Leslie Benzies\n"
        "\n\nArt Director\n\n"
        "Aaron Garbut\n"
        "\n\nTechnical Directors\n\n"
        "Adam Fowler\n"
        "Obbe Vermeij\n"
        "\n\nSenior Programmer\n\n"
        "Alexander Roger\n"
        "\n\nWritten By\n\n"
        "Dan Houser\n"
        "James Worrall\n"
        "DJ Pooh\n"
        "\n\nCreative Writer\n\n"
        "James Worrall\n"
        "\n\nLead Character Art\n\n"
        "Ian McQue\n"
        "\n\nCharacter Art\n\n"
        "Alan Davidson\n"
        "Alisdair Wood\n"
        "Rick Stirling\n"
        "Toks Solarin\n"
        "\n\nCountryside Art\n\n"
        "Michael Pirso\n"
        "Scott Wilson\n"
        "Stuart Macdonald\n"
        "\n\nLead Animator\n\n"
        "Duncan Shields\n"
        "\n\nLead Cut-Scene Animator\n\n"
        "Mondo Ghulam\n"
        "\n\nAnimation\n\n"
        "Gus Braid\n"
        "Iwan Scheer\n"
        "Mark Tennant\n"
        "Terry Kenny\n"
        "\n\nLead Los Santos Artist\n\n"
        "Nik Taylor\n"
        "\n\nLos Santos Artist\n\n"
        "James Allan\n"
        "Steven Mulholland\n"
        "Simon Little\n"
        "\n\nLead San Fierro Artist\n\n"
        "Gary McAdam\n"
        "San Fierro Artist\n"
        "Christopher Marshall\n"
        "Wayland Standing\n"
        "\n\nLead Las Venturas Artist\n\n"
        "Adam Cochrane\n"
        "\n\nLas Venturas Artist\n\n"
        "Andrew Soosay\n"
        "David Cooper\n"
        "Gillian Bertram\n"
        "\n\nLead Interior Art\n\n"
        "Andy Hay\n"
        "\n\nInterior Environment Art\n\n"
        "Alan Burns\n"
        "C-J Dick\n"
        "Lee Montgomery\n"
        "Michael Pirso\n"
        "\n\nLead Vehicle Art\n\n"
        "Paul Kurowski\n"
        "\n\nVehicle Art\n\n"
        "Alan Duncan\n"
        "Jolyon Orme\n"
        "Lead Level Design\n"
        "Craig Filshie\n"
        "\n\nSenior Level Design\n\n"
        "Andy Duthie\n"
        "Chris Rothwell\n"
        "Imran Sarwar\n"
        "William Mills\n"
        "\n\nLead Audio Designer\n\n"
        "Allan Walker\n"
        "\n\nLead Music Producer\n\n"
        "Craig Conner\n"
        "\n\nAudio Designer\n\n"
        "Jonathan McTavish\n"
        "Will Morton\n"
        "\n\nAudio Programming\n\n"
        "Alastair MacGregor\n"
        "Colin Entwistle\n"
        "Matthew Smith\n"
        "\n\nLevel Design\n\n"
        "Chris McMahon\n"
        "Christian Cantamessa\n"
        "David Beddoes\n"
        "John Haime\n"
        "Judith George\n"
        "Keith McLeman\n"
        "Kevin Bolt\n"
        "Neil Ferguson\n"
        "Paul Davis\n"
        "Simon Lashley\n"
        "Steve Taylor\n"
        "\n\nProgramming\n\n"
        "Alexander Illes\n"
        "Andrzej Madajczyk\n"
        "Barane Chan\n"
        "Derek Payne\n"
        "Derek Ward\n"
        "Gordon Yeoman\n"
        "Graeme Williamson\n"
        "Greg Smith\n"
        "James Broad\n"
        "John Gurney\n"
        "John Whyte\n"
        "Mark Nicholson\n"
        "Shaun McKillop\n"
        "\n\nQA Tools\n\n"
        "Alex Carter\n"
        "\n\nFront-end Design\n\n"
        "Stuart Petri\n"
        "\n\nQA Manager\n\n"
        "Craig Arbuthnott\n"
        "\n\nSenior Test Analyst\n\n"
        "Neil Corbett\n"
        "\n\nLead Mission Analyst / Build Coordinator\n\n"
        "David Watson\n"
        "\n\nLead Test Analyst\n\n"
        "David Murdoch\n"
        "Neil Meikle\n"
        "\n\nStandards Testing\n\n"
        "Brenda Carey\n"
        "\n\nTest\n\n"
        "Alex Bazlinton\n"
        "Alex Paterson\n"
        "Alistair Gorman\n"
        "Barry Clark\n"
        "Ben Abbott\n"
        "Ben Barclay\n"
        "Ben Greenall\n"
        "Ben McCluskey\n"
        "Bobby Wright\n"
        "Brian Kelly\n"
        "Chris Thomson\n"
        "Chris Wood\n"
        "David Murdoch\n"
        "David Watson\n"
        "Eugene Kuczerepa\n"
        "Finlay Duff\n"
        "Garry Reynolds\n"
        "Ivor Williams\n"
        "Jim McMahon\n"
        "Lindsay Robertson\n"
        "Louis Dinan\n"
        "Mark McMichael\n"
        "Matthew Clark\n"
        "Michael Chan\n"
        "Neil Meikle\n"
        "Neil Walker\n"
        "Nick Rees\n"
        "Oliver Elliott\n"
        "Paul Green\n"
        "Pedro Correia\n"
        "Philip Holden\n"
        "Robyn Milne\n"
        "Ross Wallace\n"
        "Simon King\n"
        "Stephen Anderson\n"
        "Steev Douglas\n"
        "Sundram Soosay\n"
        "Surian Christopher Soosay\n"
        "Thomas Philips\n"
        "Tony Stewart\n"
        "\n\nTest & Test Tool Support\n\n"
        "James Whitcroft\n"
        "\n\nAudio Testing\n\n"
        "George Williamson\n"
        "Studio Director\n"
        "Andrew Semple\n"
        "\n\nOffice Administrator\n\n"
        "Kim Gurney\n"
        "\n\nAdministration Support\n\n"
        "Charlene Maguire\n"
        "Milly Cottam\n"
        "Sonya Willmann\n"
        "Una Cruickshank\n"
        "\n\nIT Manager\n\n"
        "Lorraine Roy\n"
        "\n\nIT Support\n\n"
        "Christine Chalmers\n"
        "Dave Bruce\n"
        "\n\nRockstar New York\n\n"
        "\nExecutive Producer\n\n"
        "Sam Houser\n"
        "\n\nProducer\n\n"
        "Dan Houser\n"
        "\n\nVP of Development\n\n"
        "Jamie King\n"
        "Art Director\n"
        "Alex Horton\n"
        "\n\nChief Technology Officer\n\n"
        "Gary J. Foreman\n"
        "\n\nDirector of Quality Assurance\n\n"
        "Jeff Rosa\n"
        "\n\nAssociate Producer\n\n"
        "Lee Cummings\n"
        "\n\nLead Analysts\n\n"
        "Elizabeth Satterwhite\n"
        "Lance Williams\n"
        "Richard Huie\n"
        "\n\nRockstar Test Team\n\n"
        "Brian Alcazar\n"
        "Brian Planer\n"
        "Chris Choi\n"
        "Christopher Plummer\n"
        "Crystal Bahmaie\n"
        "Devin Smither\n"
        "Ethan Abeles\n"
        "Gene Overton\n"
        "Jameel Vega\n"
        "Jay Capozello\n"
        "Mike Hong\n"
        "Mike Nathan\n"
        "Scott Peterman\n"
        "Sean Flaherty\n"
        "Thomas O'Donnell\n"
        "William Rompf\n"
        "\n\nBusiness Development Manager\n\n"
        "Sean Macaluso\n"
        "\n\nSoundtrack Supervisors\n\n"
        "Tim Sweeney\n"
        "Heinz Henn\n"
        "\n\nResearch and Analysis\n\n"
        "Joe Howell\n"
        "Gregory Johnson\n"
        "Sanford Santacroce\n"
        "Nicole Whelan\n"
        "Ayana Osada\n"
        "\n\nExecutive Consultant\n\n"
        "DJ Pooh\n"
        "\n\nConsultants\n\n"
        "Estevan Oriol\n"
        "Mister Cartoon (SA Studios)\n"
        "\n\nAudio Directed By\n\n"
        "Dan Houser\n"
        "Navid Khonsari\n"
        "\n\nCutscene Mocap Directed By\n\n"
        "Navid Khonsari\n"
        "Alex Horton\n"
        "\n\nVoice Over Production By\n\n"
        "Noelle Sadler\n"
        "\n\nScript Supervision By\n\n"
        "Kerry Shaw\n"
        "\n\nCutscene Supervising Sound Editor\n\n"
        "Nicholas Montgomery\n"
        "Cutscene Sound Designer\n"
        "Brian Scibinico\n"
        "\n\nDialogue Edited By\n\n"
        "Marilyn Teorey\n"
        "Anthony Litton\n"
        "\n\nDJ Banter and Commercials Produced By\n\n"
        "Lazlow\n"
        "\n\nProduction Department\n\n"
        "Eli Weissman\n"
        "Franceska Clemens\n"
        "John Zurhellen\n"
        "Lyonel Tollemache\n"
        "Phil Poli\n"
        "\n\nMotion Graphics\n\n"
        "Jon Dorfman\n"
        "Maryam Parwana\n"
        "\n\nThe Cast\n\n"
        "\n\nVoice Over Actors\n\n"
        "Carl \"CJ\" Johnson - Chris Bellard aka Young Maylay\n"
        "Sean \"Sweet\" Johnson - Faizon Love\n"
        "Kendl Johnson - Yo Yo\n"
        "Melvin \"Big Smoke\" Harris - Clifton Powell\n"
        "Lance \"Ryder\" Wilson - MC Eiht\n"
        "OG Loc - Jas Anderson\n"
        "Mark \"B Dup\" Wayne - The Game\n"
        "Barry \"Big Bear\" Thorne - Big Boy\n"
        "Emmet - Eugene Jeter Jr.\n"
        "Madd Dogg - Ice T\n"
        "Cesar Vialpando - Clifton Collins Jr.\n"
        "Officer Tenpenny - Samuel L. Jackson\n"
        "Officer Pulaski - Chris Penn\n"
        "Officer Hernandez - Armando Riesco\n"
        "Catalina - Cynthia Farrell\n"
        "The Truth - Peter Fonda\n"
        "Jizzy B. - Charlie Murphy\n"
        "T-Bone - Kid Frost\n"
        "Mike Toreno - James Woods\n"
        "Woozie - James Yaegashi\n"
        "Su Xi Mu (Soozie) - Richard Chang\n"
        "Ran Fa Li (Farlie) - Hunter Platin\n"
        "Zero - David Cross\n"
        "Kent Paul - Danny Dyer\n"
        "Maccer - Shaun Ryder\n"
        "Ken Rosenberg - Bill Fitchner\n"
        "Salvatore Leone - Frank Vincent\n"
        "Maria - Debi Mazar\n"
        "Johnny Sindacco - Casey Siemaszko\n"
        "Jimmy Silverman - Gary Yudman\n"
        "Bettina - Noelle Sadler\n"
        "Jethro - John Zurhellen\n"
        "Dwaine - Navid Khonsari\n"
        "Millie Perkins - Orfeh\n"
        "Barbara Schternvart - Danielle Lee Greaves\n"
        "Denise Robinson - Heather Alicia Simms\n"
        "Michelle Cannes - Vanessa Aspillaga\n"
        "Helena Wankstein - Bijou Phillips\n"
        "Katie Zhan - China Chow\n"
        "KDST DJ - Axl Rose\n"
        "Modern Hip Hop DJ - Julio G\n"
        "Classic Hip Hop DJ - Chuck D.\n"
        "Grove Street Families Gang - Solo, A. da Business, Vincent Lomax, Gregory Johnson, Ricky Harris\n"
        "Ballas Gang - Donnie Anderson, Michael Ralph, Ricky Harris, Darreck Burns, Derrick Edmond\n"
        "\n\nRecorded At\n\n"
        "Rockstar NYC, Juice West, LA\n"
        "\n\nDirected By\n\n"
        "Dan Houser\n"
        "Navid Khonsari\n"
        "\n\nPedestrian VO Talent\n\n"
        "Adam G\n"
        "Adam Sietz\n"
        "Adrian Guzman (aka Transcend)\n"
        "Aldis Hodge\n"
        "Alexandra Ortiz\n"
        "Alexis Camins\n"
        "Alice Liu\n"
        "Alonzo Williams\n"
        "Andrea Kessler\n"
        "Angelo Perez\n"
        "Anna Curtis\n"
        "Anouchka Benson\n"
        "Antonio Charity\n"
        "Armando Riesco\n"
        "Asa Somers\n"
        "Ben Wang\n"
        "Benjamin Byron Davis\n"
        "Bigg Giant\n"
        "Bill Buell\n"
        "Billy Griffith\n"
        "Brad Abrell\n"
        "Cara Cooper\n"
        "Carlos Carrasco\n"
        "Carolyn Lawson\n"
        "Casey Siemaszko\n"
        "Catherine Kung\n"
        "Chad Doreck\n"
        "Charlene Carabeo\n"
        "Chris Lucas\n"
        "Chris Tardio\n"
        "Columbus Short\n"
        "C.S. Lee\n"
        "Daniel Larlham\n"
        "Daniel Lee\n"
        "Daniel Venegas\n"
        "Daniel Whitner\n"
        "David Lopez\n"
        "David Shatraw\n"
        "David Shih\n"
        "Dawn Jamieson\n"
        "Dennis Ostermaier\n"
        "Derek Basco\n"
        "Don Nahaku\n"
        "Donna Cross\n"
        "Duane Shepard\n"
        "Ed Seamon\n"
        "Edwin Hodge\n"
        "Evelyn Page\n"
        "Frank Nitty\n"
        "Frank Simms\n"
        "Fred Berman\n"
        "Gary Yudman\n"
        "Geoffrey Arend\n"
        "Gil Silverbird\n"
        "Gisele Richardson\n"
        "Gordana Rashovich\n"
        "Gustavo Rex\n"
        "Hanson Tse\n"
        "Holly Lewis\n"
        "Hoon Lee\n"
        "Horacio Romero\n"
        "Isabella Donato\n"
        "Ivelka Reyes\n"
        "Jack Luceno\n"
        "Jackson Loo\n"
        "Jameel Vega\n"
        "James Kennedy\n"
        "Jamil Smith\n"
        "Janora McDuffie\n"
        "Jason Alan Smith\n"
        "Jayson Gladstone\n"
        "Jeff Gurner\n"
        "Jerry Diner\n"
        "Jesse Perez\n"
        "Jessica Lugo\n"
        "Jesus Flores (aka Oppose Da Silence)\n"
        "Jinn S. Kim\n"
        "Joe Abbate\n"
        "Joe Holt\n"
        "John Zurhellen\n"
        "Jordi Caballero\n"
        "Jordin Ruderman\n"
        "Jose Martinez\n"
        "Julie J. Hafner\n"
        "Kathy Rossetter\n"
        "Ken Foree\n"
        "Kenn Michael\n"
        "Kenneth Choi\n"
        "Kevin Mambo\n"
        "Kinley Doucette\n"
        "Lance Williams\n"
        "Lee Rosen\n"
        "Lee Wong\n"
        "Lenny Grossi\n"
        "Leonardo Tejeda\n"
        "Lloyd Floyd\n"
        "Lou Martini Jr.\n"
        "Mamie-Louise Anderson\n"
        "Marchand Odette\n"
        "Marcus Ho\n"
        "Marina Pincus\n"
        "Mark Casella\n"
        "Matt Eyde\n"
        "Matthew Ballard\n"
        "Melania Hall\n"
        "Mella Fazzoli\n"
        "Messeret Stroman\n"
        "Michael Cullen\n"
        "Michael Goz\n"
        "Michael Winslow\n"
        "Mike Smith\n"
        "Mikka Orenstein\n"
        "Millicent Cho\n"
        "Monique Lea\n"
        "Mr. Ko-Bra\n"
        "Natalie Belcon\n"
        "Nick Bosco\n"
        "Nika Futterman\n"
        "Nina Siemaszko\n"
        "Noelle Sadler\n"
        "Oliver Wyman\n"
        "Omar Scroggins\n"
        "Pat Nesbitt\n"
        "Paul Cicero\n"
        "Paul McCarthy Boyington\n"
        "Paymon Bahadoran\n"
        "Philip Cruise\n"
        "Phillip Jeanmarie\n"
        "Raynor Scheine\n"
        "Rick Negron\n"
        "Rocco Sisto\n"
        "Rodd Houston\n"
        "Rodrick Covington\n"
        "Ron Foster\n"
        "Ron Nakahara\n"
        "Russell Koplin\n"
        "Ruth Livier\n"
        "Ruth Zhang\n"
        "Sam Reich\n"
        "Sami Sargent\n"
        "Sanford Santacroce\n"
        "Sara Tanaka\n"
        "Sarah Sido\n"
        "Shawn Curran\n"
        "Sonya Walger\n"
        "Stacey Newman\n"
        "Stanton Sarjeant\n"
        "Steve Cirbus\n"
        "Stevie Ray Dallimore\n"
        "Sue Jean Kim\n"
        "Susan Spano\n"
        "Ted Koch\n"
        "Tom Sminkey\n"
        "Tony Romero\n"
        "Toru Ohno\n"
        "Toy Connor\n"
        "Tyler Bunch\n"
        "Ursula Abbott\n"
        "Valyn Hall\n"
        "Vanese Smith\n"
        "Vernee Watson-Johnson\n"
        "Victor Lirio\n"
        "Victor Verhaeghe\n"
        "Vincenetta Gunn\n"
        "Wai Ching Ho\n"
        "Wass Stevens\n"
        "Wilhelm Lewis\n"
        "Xavier Cadeau\n"
        "Daniel Einzig\n"
        "Chris Carro\n"
        "Ryan Rayhill\n"
        "Anthony Carvalho\n"
        "Phil Poli\n"
        "Carmelo Gaeta\n"
        "Gregg Sanderson\n"
        "Elizabeth Satterwhite\n"
        "Franceska Clemens\n"
        "Oswald Greene\n"
        "Rich Rosado\n"
        "Kerry Shaw\n"
        "Ethan Abeles\n"
        "Richard Huie\n"
        "Casting By\n"
        "Judy Henderson & Associates\n"
        "\n\nRecorded At\n\n"
        "Digital Arts (NYC)\n"
        "Audio Banks (LA)\n"
        "Pedestrian V.O.s Written By\n"
        "Dan Houser\n"
        "James Worrall\n"
        "DJ Pooh\n"
        "Gregory Johnson\n"
        "Nicole Whelan\n"
        "Sanford Santacroce\n"
        "With Help From\n"
        "Noelle Sadler\n"
        "Navid Khonsari\n"
        "Ayana Osada\n"
        "John Zurhellen\n"
        "Kerry Shaw\n"
        "Will Morton\n"
        "Motion Capture Actors\n"
        "Eddie Goines\n"
        "Billy Griffith\n"
        "Mustafa Shakir\n"
        "Ephraim Benton\n"
        "Jonathan Anderson\n"
        "Sophina Brown\n"
        "Kiki Goins\n"
        "David Anzuelo\n"
        "Wilhelm Lewis\n"
        "Darren Lenz\n"
        "Omar Soriano\n"
        "Danny Johnson\n"
        "Mtume Gant\n"
        "Jose Hernandez Jr.\n"
        "William McCall\n"
        "Chandler Parker\n"
        "David Zayas\n"
        "Frederick Owens\n"
        "Charles Loflin\n"
        "Flora Diaz\n"
        "Kurt Rhoads\n"
        "James Yaegashi\n"
        "Gilbert Cruz\n"
        "Loose Cannon\n"
        "Daniel Larlham\n"
        "Elliot Joseph\n"
        "Nicole Alifante\n"
        "Jeffrey C. Hawkins\n"
        "Chris Tardio\n"
        "Reza Garakani\n"
        "Violeta Galagarza\n"
        "Andrew Dowdey\n"
        "Av Berkovitz\n"
        "Blake Remer\n"
        "Calvin Wilds\n"
        "Daniel Chanis\n"
        "Daniel Larlham\n"
        "Danny Chanis\n"
        "Elena Goode\n"
        "Ford Harris\n"
        "Gable Frazier\n"
        "Heather Catania\n"
        "Jay Zaretsky\n"
        "Jaymie Wisneski\n"
        "Jayson Gladstone\n"
        "Jeremy Schaller\n"
        "Jesse Denes\n"
        "Jonathan Kurt\n"
        "Julia Tcharfas\n"
        "Kareem L. Bunton\n"
        "Lindsay King Wisneski\n"
        "M. Russell Foreman\n"
        "Mary Zielinski\n"
        "Molly Byrnes\n"
        "Quindell Willis\n"
        "Ryan Minnaugh\n"
        "Tara K. Spencer\n"
        "Taron Benson\n"
        "Tiombe Lockhart\n"
        "Wyatt Knaster\n"
        "KR3T's Dance Company www.kr3ts.com\n"
        "Yoshito Mizutani\n"
        "Maria Ramos\n"
        "Julio Samuel Heredia\n"
        "Jocelyn Rivera\n"
        "Choreographer\n"
        "Violeta Galagarza\n"
        "\n\nCasting By\n\n"
        "Bernard Telsey Casting\n"
        "\n\nRecorded At\n\n"
        "Perspective Studios\n"
        "Facial Tracking & Animation\n"
        "Image Metrics PLC\n"
        "\n\nMotion Capture Coordinator\n\n"
        "Manny Siverio\n"
        "\n\nModels\n\n"
        "Bart Larson\n"
        "Carrie Simmons\n"
        "Casey Adler\n"
        "Da Vinci\n"
        "David Parry\n"
        "DJ Rabiola\n"
        "Eliot Lee Hazel\n"
        "Erl\n"
        "Gabby Tary\n"
        "Gina Diaz\n"
        "I Wei Lai\n"
        "Jeffrey Damnit\n"
        "Joel Huggins\n"
        "Leona Babette\n"
        "Lester Roque\n"
        "Liz Ard\n"
        "Vanessa Christel\n"
        "Vylette Fagerholm\n"
        "Wayne Rambharose\n"
        "Armando Cantina\n"
        "Armando Garcia|Armando \"Wolf\" Garcia\n"
        "Danny Martinez\n"
        "Eduardo Meza\n"
        "Frank Alvarez\n"
        "Kattia M. Ortiz Escobar\n"
        "Luis Moncada\n"
        "Michael Washington|Michael \"Shagg\" Washington\n"
        "Nikki Shandasani|Nikki Shandasani aka \"DJ Tribe\"\n"
        "Roy Garcia Jr.\n"
        "Trina Vela\n"
        "Anthony Washington\n"
        "Briggette Brooks\n"
        "Chris \"Maylay\" Bellard\n"
        "Darius Henderson aka \"Black\"\n"
        "Darreck Burns\n"
        "Derrick Edmond\n"
        "Derrick Ford\n"
        "Donnie Anderson\n"
        "George \"Tone\" Henderson\n"
        "Jody Terrell\n"
        "Kenneth Morris\n"
        "Lashelle Danee Sanders\n"
        "Marvin C. Watkins Jr.\n"
        "Marvin C. Watkins Sr.\n"
        "Michael \"Mykestro\" Gilliam\n"
        "Rodney Williams\n"
        "Shamika Shirley\n"
        "Silvia Mayo\n"
        "Tony Rushing\n"
        "Walter \"Oowee\" Tucker\n"
        "Billy Griffith\n"
        "Brad Kagawa\n"
        "Brian Yang\n"
        "Bruce Ho\n"
        "Cheng-Nan Chen\n"
        "Chris Choi\n"
        "Chris Plummer\n"
        "Christina P. Chen\n"
        "Clint Chin\n"
        "Daniel Lee\n"
        "Dave Kim\n"
        "Diego P. Chen\n"
        "Ephraim Benton\n"
        "Futaba Hayashi\n"
        "Gerri Igrashi\n"
        "Harvey Fung\n"
        "Jackson Ning\n"
        "Jaz Anderson\n"
        "Jo Yang\n"
        "Joe LaRue\n"
        "Kathy Chan\n"
        "Lance Williams\n"
        "Liliana Chen\n"
        "Mark Azarcon\n"
        "Mayumi Kobayashi\n"
        "Michael Lew\n"
        "Mike Hong\n"
        "Rain Noe\n"
        "Renaud Sebbane\n"
        "Rich Huie\n"
        "Roberto Melendez\n"
        "Scott Peterman\n"
        "Steve Knezevich\n"
        "Sueane Mun\n"
        "Tim Sweeney\n"
        "\n\nPhotographers\n\n"
        "Will Blochinger\n"
        "Dedjora Jutaz / Quad Photo\n"
        "\n\nStylists\n\n"
        "Daria Hines\n"
        "Evan Ross\n"
        "\n\nPublishing Team\n\n"
        "Terry Donovan\n"
        "Jenefer Gross\n"
        "Jennifer Kolbe\n"
        "Jeff Castaneda\n"
        "Adam Tedman\n"
        "Laura Paterson\n"
        "Devin Winterbottom\n"
        "Andrea Borzuku\n"
        "Jordan Chew\n"
        "Hosi Simon\n"
        "Paul Yeates\n"
        "Gauri Khindaria\n"
        "Bill Woods\n"
        "Dave Kim\n"
        "Daniel Einzig\n"
        "Chris Carro\n"
        "Devin Bennett\n"
        "Ryan Rayhill\n"
        "Harry Allen\n"
        "Michael Carnevale\n"
        "Robert Botsford\n"
        "Jerry Luna\n"
        "Alice Chuang\n"
        "Futaba Hayashi\n"
        "Jake King\n"
        "Richard Kruger\n"
        "John Schuhmann\n"
        "Mike Torok\n"
        "Anthony Carvalho\n"
        "Nick Giovannetti\n"
        "Stanton Sarjeant\n"
        "Marlene Yamaguchi\n"
        "Mike Cala\n"
        "Susan Lewis\n"
        "Larry Conti\n"
        "Brian Noto\n"
        "\n\nCover Art\n\n"
        "Steven Olds\n"
        "Stephen Bliss\n"
        "Anthony Macbain\n"
        "\nRockstar Lincoln\n\n"
        "\n\nQA Manager\n\n"
        "Mark Lloyd\n"
        "\n\nDeputy QA Manager\n\n"
        "Tim Bates\n"
        "\n\nQA Supervisors\n\n"
        "Kevin Hobson\n"
        "Kit Brown\n"
        "Charlie Kinloch\n"
        "\n\nTest Team\n\n"
        "Matt Hewitt\n"
        "Phil Alexander\n"
        "Jonathan Stones\n"
        "Steve Bell\n"
        "Eddie Gibson\n"
        "Andy Webster\n"
        "Will Riggott\n"
        "Jon Gittus\n"
        "Dave Lawrence\n"
        "Mike Bennett\n"
        "\n\nLocalization Test Team\n\n"
        "Antoine Cabrol\n"
        "Chris Welsh\n"
        "Alain Dellepiane\n"
        "Dominic Garcia\n"
        "François-Xavier Fouchet\n"
        "Stefano Moretti\n"
        "Carsten Arnold\n"
        "Salvador Tintoré\n"
        "\n\nI.T Supervisor\n\n"
        "Nick McVey\n"
        "Thanks To\n"
        "Chris McCallum\n"
        "Chris Morton\n"
        "Deep Sea\n"
        "Jennifer Arthur\n"
        "Jumbos Clownroom\n"
        "Kay Payne\n"
        "Lorna \"H-D\"\n"
        "Martin & Claire Logan\n"
        "Mike Patton\n"
        "Officer Gregory hue SFPD\n"
        "Pivo\n"
        "Sandy Hutton\n"
        "Sarah Oram\n"
        "Smoke Stack\n"
        "Trattoria Siciliana\n"
        "Black Bull\n"
    ;

    // Create our window
    CVector2D RelativeWindow = CVector2D(fWindowX / pManager->GetResolution().fX, fWindowY / pManager->GetResolution().fY);
    m_pWindow = reinterpret_cast<CGUIWindow*>(pManager->CreateWnd(NULL, "Iran Multi Player: San Andreas " MTA_DM_BUILDTAG_SHORT));
    m_pWindow->SetCloseButtonEnabled(false);
    m_pWindow->SetMovable(false);
    m_pWindow->SetPosition(CVector2D(0.5f - RelativeWindow.fX * 0.5f, 0.5f - RelativeWindow.fY * 0.5f), true);
    m_pWindow->SetSize(CVector2D(fWindowX, fWindowY));            // relative 0.70, 0.50
    m_pWindow->SetSizingEnabled(false);
    m_pWindow->SetVisible(false);
    m_pWindow->SetAlwaysOnTop(true);

    // Credits label
    memset(m_pLabels, 0, sizeof(CGUILabel*) * MAX_CREDITS_LABEL_COUNT);

    // Create one for every 15th line. This is because of some limit at 500 chars
    float        fStartPosition = 1.0f;
    const char*  szCreditsIterator = m_strCredits.c_str();
    const char*  szCreditsBegin = m_strCredits.c_str();
    unsigned int uiLineCount = 0;
    unsigned int uiLabelIndex = 0;
    while (true)
    {
        // Count every new line
        if (*szCreditsIterator == '\n')
            ++uiLineCount;

        // 15? Create a new label
        if (uiLineCount >= 15 || *szCreditsIterator == 0)
        {
            // Copy out the text we shall put in that label
            std::string strBuffer(szCreditsBegin, szCreditsIterator - szCreditsBegin);

            // Remember where we count from
            szCreditsBegin = szCreditsIterator;
            ++szCreditsBegin;

            // Create the label
            m_pLabels[uiLabelIndex] = reinterpret_cast<CGUILabel*>(pManager->CreateLabel(m_pWindow, strBuffer.c_str()));
            m_pLabels[uiLabelIndex]->SetPosition(CVector2D(0.022f, fStartPosition), true);
            m_pLabels[uiLabelIndex]->SetSize(CVector2D(532.0f, 1500.0f));            // relative 0.95, 6.0
            m_pLabels[uiLabelIndex]->SetHorizontalAlign(CGUI_ALIGN_HORIZONTALCENTER);
            ++uiLabelIndex;

            // Reset the linecount
            uiLineCount = 0;
        }

        // End the loop at 0
        if (*szCreditsIterator == 0)
            break;

        // Increase the credits iterator
        ++szCreditsIterator;
    }

    // Create the OK button
    m_pButtonOK = reinterpret_cast<CGUIButton*>(pManager->CreateButton(m_pWindow, "OK"));
    m_pButtonOK->SetPosition(CVector2D(0.77f, 0.90f), true);
    m_pButtonOK->SetSize(CVector2D(112.0f, 21.0f));            // relative 0.20, 0.07
    m_pButtonOK->SetVisible(true);
    m_pButtonOK->SetAlwaysOnTop(true);

    // Set up the event handlers
    m_pButtonOK->SetClickHandler(GUI_CALLBACK(&CCredits::OnOKButtonClick, this));
    m_pWindow->SetEnterKeyHandler(GUI_CALLBACK(&CCredits::OnOKButtonClick, this));
}

CCredits::~CCredits()
{
    // Delete all the labels
    int i = 0;
    for (; i < MAX_CREDITS_LABEL_COUNT; i++)
    {
        if (m_pLabels[i])
        {
            delete m_pLabels[i];
            m_pLabels[i] = NULL;
        }
    }

    // Delete the controls
    delete m_pButtonOK;

    // Delete our window
    delete m_pWindow;
}

void CCredits::Update()
{
    if (m_pWindow->IsVisible())
    {
        // Speed it up if arrow keys are being held
        if ((GetAsyncKeyState(VK_DOWN) & 0x8000) != 0)
        {
            m_clkStart -= 150;
        }
        if ((GetAsyncKeyState(VK_UP) & 0x8000) != 0)
        {
            m_clkStart += 150;
        }

        // Calculate the current position
        float fCurrentTop = 1.0f - 0.0001f * static_cast<float>(clock() - m_clkStart);

        // If we're too far down or up, make sure we restart next pulse
        if (fCurrentTop <= -63.0f || fCurrentTop >= 1.0f)
        {
            m_clkStart = clock();
        }

        // Move everything by the time
        int i = 0;
        for (; i < MAX_CREDITS_LABEL_COUNT; i++)
        {
            if (m_pLabels[i])
            {
                m_pLabels[i]->SetPosition(CVector2D(0.022f, fCurrentTop + i * 0.725f), true);
            }
        }
    }
}

void CCredits::SetVisible(bool bVisible)
{
    m_pWindow->SetVisible(bVisible);
    m_pWindow->BringToFront();
    m_clkStart = clock();
}

bool CCredits::IsVisible()
{
    return m_pWindow->IsVisible();
}

bool CCredits::OnOKButtonClick(CGUIElement* pElement)
{
    CMainMenu* pMainMenu = CLocalGUI::GetSingleton().GetMainMenu();

    // Close the window
    m_pWindow->SetVisible(false);
    pMainMenu->m_bIsInSubWindow = false;

    return true;
}
