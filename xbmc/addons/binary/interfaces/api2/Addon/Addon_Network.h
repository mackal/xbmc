#pragma once
/*
 *      Copyright (C) 2015-2016 Team KODI
 *      http://kodi.tv
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with KODI; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

namespace V2
{
namespace KodiAPI
{

struct CB_AddOnLib;

namespace AddOn
{
extern "C"
{

  class CAddOnNetwork
  {
  public:
    static void Init(struct CB_AddOnLib *interfaces);

    static bool wake_on_lan(
          void*                     hdl,
          const char*               mac);

    static void get_ip_address(
          void*                     hdl,
          char&                     ip,
          unsigned int&             iMaxStringSize);

    static char* dns_lookup(
          void*                     hdl,
          const char*               url,
          bool&                     ret);

    static char* url_encode(
          void*                     hdl,
          const char*               url);
  };

} /* extern "C" */
} /* namespace AddOn */

} /* namespace KodiAPI */
} /* namespace V2 */
