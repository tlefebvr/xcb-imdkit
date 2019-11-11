/*
 * Copyright (C) 2017~2017 by CSSlayer
 * wengxt@gmail.com
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of the
 * License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; see the file COPYING. If not,
 * see <http://www.gnu.org/licenses/>.
 */
#ifndef _FCITX_XIMPROTO_P_H_
#define _FCITX_XIMPROTO_P_H_

#define XIM_PROTO_FRAME_OPCODE(FRAME)                                          \
    _Generic((FRAME), xcb_im_connect_reply_fr_t                                \
             : XCB_XIM_CONNECT_REPLY, xcb_im_open_fr_t                         \
             : XCB_XIM_OPEN, xcb_im_open_reply_fr_t                            \
             : XCB_XIM_OPEN_REPLY, xcb_im_close_fr_t                           \
             : XCB_XIM_CLOSE, xcb_im_close_reply_fr_t                          \
             : XCB_XIM_CLOSE_REPLY, xcb_im_query_extension_fr_t                \
             : XCB_XIM_QUERY_EXTENSION, xcb_im_query_extension_reply_fr_t      \
             : XCB_XIM_QUERY_EXTENSION_REPLY, xcb_im_encoding_negotiation_fr_t \
             : XCB_XIM_ENCODING_NEGOTIATION,                                   \
               xcb_im_encoding_negotiation_reply_fr_t                          \
             : XCB_XIM_ENCODING_NEGOTIATION_REPLY, xcb_im_get_im_values_fr_t   \
             : XCB_XIM_GET_IM_VALUES, xcb_im_get_im_values_reply_fr_t          \
             : XCB_XIM_GET_IM_VALUES_REPLY, xcb_im_set_event_mask_fr_t         \
             : XCB_XIM_SET_EVENT_MASK, xcb_im_create_ic_fr_t                   \
             : XCB_XIM_CREATE_IC, xcb_im_create_ic_reply_fr_t                  \
             : XCB_XIM_CREATE_IC_REPLY, xcb_im_set_ic_values_fr_t              \
             : XCB_XIM_SET_IC_VALUES, xcb_im_set_ic_values_reply_fr_t          \
             : XCB_XIM_SET_IC_VALUES_REPLY, xcb_im_get_ic_values_fr_t          \
             : XCB_XIM_GET_IC_VALUES, xcb_im_get_ic_values_reply_fr_t          \
             : XCB_XIM_GET_IC_VALUES_REPLY, xcb_im_register_triggerkeys_fr_t   \
             : XCB_XIM_REGISTER_TRIGGERKEYS, xcb_im_destroy_ic_fr_t            \
             : XCB_XIM_DESTROY_IC, xcb_im_destroy_ic_reply_fr_t                \
             : XCB_XIM_DESTROY_IC_REPLY, xcb_im_reset_ic_fr_t                  \
             : XCB_XIM_RESET_IC, xcb_im_reset_ic_reply_fr_t                    \
             : XCB_XIM_RESET_IC_REPLY, xcb_im_trigger_notify_fr_t              \
             : XCB_XIM_TRIGGER_NOTIFY, xcb_im_trigger_notify_reply_fr_t        \
             : XCB_XIM_TRIGGER_NOTIFY_REPLY, xcb_im_preedit_start_fr_t         \
             : XCB_XIM_PREEDIT_START, xcb_im_preedit_draw_fr_t                 \
             : XCB_XIM_PREEDIT_DRAW, xcb_im_preedit_caret_fr_t                 \
             : XCB_XIM_PREEDIT_CARET, xcb_im_preedit_done_fr_t                 \
             : XCB_XIM_PREEDIT_DONE, xcb_im_status_start_fr_t                  \
             : XCB_XIM_STATUS_START, xcb_im_status_draw_text_fr_t              \
             : XCB_XIM_STATUS_DRAW, xcb_im_status_draw_bitmap_fr_t             \
             : XCB_XIM_STATUS_DRAW, xcb_im_status_done_fr_t                    \
             : XCB_XIM_STATUS_DONE, xcb_im_commit_chars_fr_t                   \
             : XCB_XIM_COMMIT, xcb_im_commit_both_fr_t                         \
             : XCB_XIM_COMMIT, xcb_im_connect_fr_t                             \
             : XCB_XIM_CONNECT, xcb_im_disconnect_fr_t                         \
             : XCB_XIM_DISCONNECT, xcb_im_disconnect_reply_fr_t                \
             : XCB_XIM_DISCONNECT_REPLY, xcb_im_set_ic_focus_fr_t              \
             : XCB_XIM_SET_IC_FOCUS, xcb_im_unset_ic_focus_fr_t                \
             : XCB_XIM_UNSET_IC_FOCUS, xcb_im_sync_fr_t                        \
             : XCB_XIM_SYNC, xcb_im_sync_reply_fr_t                            \
             : XCB_XIM_SYNC_REPLY, xcb_im_geometry_fr_t                        \
             : XCB_XIM_GEOMETRY)

#endif // _FCITX_XIMPROTO_P_H_
