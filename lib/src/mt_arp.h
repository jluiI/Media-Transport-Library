/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2022 Intel Corporation
 */

#ifndef _MT_LIB_ARP_HEAD_H_
#define _MT_LIB_ARP_HEAD_H_

#include "mt_main.h"

int mt_arp_parse(struct mtl_main_impl* impl, struct rte_arp_hdr* hdr, enum mtl_port port);

int mt_arp_cni_get_mac(struct mtl_main_impl* impl, struct rte_ether_addr* ea,
                       enum mtl_port port, uint32_t ip, int timeout_ms);

int mt_arp_init(struct mtl_main_impl* impl);
int mt_arp_uinit(struct mtl_main_impl* impl);

#endif
