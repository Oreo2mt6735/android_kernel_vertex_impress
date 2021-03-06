/*
* Copyright (C) 2016 MediaTek Inc.
*
* This program is free software: you can redistribute it and/or modify it under the terms of the
* GNU General Public License version 2 as published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
* without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See the GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License along with this program.
* If not, see <http://www.gnu.org/licenses/>.
*/

/*
** Id: //Department/DaVinci/TRUNK/WiFi_P2P_Driver/include/mgmt/p2p_scan.h#1
*/

/*! \file   "scan.h"
 *  \brief
 *
 */

#ifndef _P2P_SCAN_H
#define _P2P_SCAN_H

/*******************************************************************************
 *                         C O M P I L E R   F L A G S
 ********************************************************************************
 */

/*******************************************************************************
 *                    E X T E R N A L   R E F E R E N C E S
 ********************************************************************************
 */
/*******************************************************************************
 *                              C O N S T A N T S
 ********************************************************************************
 */

/*******************************************************************************
 *                                 M A C R O S
 ********************************************************************************
 */

/*******************************************************************************
 *                             D A T A   T Y P E S
 ********************************************************************************
 */

/*******************************************************************************
 *                            P U B L I C   D A T A
 ********************************************************************************
 */

/*******************************************************************************
 *                           P R I V A T E   D A T A
 ********************************************************************************
 */

/*******************************************************************************
 *                  F U N C T I O N   D E C L A R A T I O N S
 ********************************************************************************
 */

VOID scnEventReturnChannel(IN P_ADAPTER_T prAdapter, IN UINT_8 ucScnSeqNum);

BOOLEAN scanUpdateP2pDeviceDesc(IN P_ADAPTER_T prAdapter, IN P_BSS_DESC_T prBssDesc);

VOID
scanP2pProcessBeaconAndProbeResp(IN P_ADAPTER_T prAdapter, IN P_SW_RFB_T prSwRfb, IN P_WLAN_STATUS prStatus, IN
				 P_BSS_DESC_T prBssDesc, IN P_WLAN_BEACON_FRAME_T prWlanBeaconFrame);

VOID scanRemoveAllP2pBssDesc(P_ADAPTER_T prAdapter);

VOID scanRemoveP2pBssDesc(P_ADAPTER_T prAdapter, P_BSS_DESC_T prBssDesc);

P_BSS_DESC_T scanP2pSearchDesc(IN P_ADAPTER_T prAdapter, IN P_P2P_CONNECTION_REQ_INFO_T prConnReqInfo);

#endif
