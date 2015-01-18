/** 
  * Copyright (C) 2008-2014, Marvell International Ltd. 
  * 
  * This software file (the "File") is distributed by Marvell International 
  * Ltd. under the terms of the GNU General Public License Version 2, June 1991 
  * (the "License").  You may use, redistribute and/or modify this File in 
  * accordance with the terms and conditions of the License, a copy of which 
  * is available by writing to the Free Software Foundation, Inc.,
  * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA or on the
  * worldwide web at http://www.gnu.org/licenses/old-licenses/gpl-2.0.txt.
  *
  * THE FILE IS DISTRIBUTED AS-IS, WITHOUT WARRANTY OF ANY KIND, AND THE 
  * IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE 
  * ARE EXPRESSLY DISCLAIMED.  The License provides additional details about 
  * this warranty disclaimer.
  *
  */

/*******************************************************************************************
*
* File: mlmeParent.h
*        MLME Parent Module Header
* Description:  Implementation of the MLME Parent Module Services
*
*******************************************************************************************/

#ifndef MAC_MLME_PARENT
#define MAC_MLME_PARENT
#include "wlvmac.h"

extern vmacId_t parentGetVMacId( UINT8 macIndex );
extern vmacEntry_t * mlmeStaInit_Parent(UINT8   macIndex, 
                                    UINT8 * macAddr, 
                                    void  * callBackFunc_p);

#endif /* MAC_MLME_PARENT */





