/*
 * acl.h - Define the ACL interface
 *
 * Copyright (C) 2013 - 2019, Max Lv <max.c.lv@gmail.com>
 *
 * This file is part of the shadowsocks-libev.
 *
 * shadowsocks-libev is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * shadowsocks-libev is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with shadowsocks-libev; see the file COPYING. If not, see
 * <http://www.gnu.org/licenses/>.
 */

#ifndef _ACL_H
#define _ACL_H

#define BLACK_LIST 0
#define WHITE_LIST 1

int init_acl(const char *path); // 初始化ACL
void free_acl(void); // 释放ACL

int acl_match_host(const char *ip); // 匹配主机
int acl_add_ip(const char *ip); // 添加IP
int acl_remove_ip(const char *ip); // 删除IP

int get_acl_mode(void); // 获取ACL模式

int outbound_block_match_host(const char *host); // 匹配主机

#endif // _ACL_H
