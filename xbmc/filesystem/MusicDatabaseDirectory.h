/*
 *  Copyright (C) 2005-2018 Team Kodi
 *  This file is part of Kodi - https://kodi.tv
 *
 *  SPDX-License-Identifier: GPL-2.0-or-later
 *  See LICENSES/README.md for more information.
 */

#pragma once

#include "IDirectory.h"

namespace XFILE
{

namespace MUSICDATABASEDIRECTORY
{
enum class NodeType;
class CQueryParams;
} // namespace MUSICDATABASEDIRECTORY

  class CMusicDatabaseDirectory : public IDirectory
  {
  public:
    CMusicDatabaseDirectory(void);
    ~CMusicDatabaseDirectory(void) override;
    bool GetDirectory(const CURL& url, CFileItemList &items) override;
    bool AllowAll() const override { return true; }
    bool Exists(const CURL& url) override;
    static MUSICDATABASEDIRECTORY::NodeType GetDirectoryChildType(const std::string& strPath);
    static MUSICDATABASEDIRECTORY::NodeType GetDirectoryType(const std::string& strPath);
    static MUSICDATABASEDIRECTORY::NodeType GetDirectoryParentType(const std::string& strPath);
    static bool GetDirectoryNodeInfo(const std::string& strPath,
                                     MUSICDATABASEDIRECTORY::NodeType& type,
                                     MUSICDATABASEDIRECTORY::NodeType& childtype,
                                     MUSICDATABASEDIRECTORY::CQueryParams& params);
    bool IsArtistDir(const std::string& strDirectory);
    void ClearDirectoryCache(const std::string& strDirectory);
    static bool IsAllItem(const std::string& strDirectory);
    static bool GetLabel(const std::string& strDirectory, std::string& strLabel);
    bool ContainsSongs(const std::string &path);
    static bool CanCache(const std::string& strPath);
    static std::string GetIcon(const std::string& strDirectory);
  };
}
