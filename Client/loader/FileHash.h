/*****************************************************************************
 *
 *  PROJECT:     IRan Multi Player
 *  LICENSE:     See LICENSE in the top level directory
 *  FILE:        Client/loader/FileHash.h
 *
 *  Iran Multi Player is available from https://ir-mp.ir/
 *
 *****************************************************************************/

#pragma once

#include <array>
#include <string>

/**
 * @brief Represents the raw SHA-256 checksum of a file.
 */
using FileHash = std::array<unsigned char, 32>;

/**
 * @brief Generates the string representation of the hash in hexadecimal digits.
 * @param hash Hash of the file
 */
auto GetFileHashString(const FileHash& hash) -> std::string;
