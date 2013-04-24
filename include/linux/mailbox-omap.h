/*
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _MAILBOX_OMAP_H
#define _MAILBOX_OMAP_H

#include <linux/mailbox.h>

/* These need not be implemented for OMAP1 */
#ifdef CONFIG_ARCH_OMAP2PLUS
void mailbox_omap_save_ctx(struct mailbox *mbox);
void mailbox_omap_restore_ctx(struct mailbox *mbox);
void mailbox_omap_enable_irq(struct mailbox *mbox, mailbox_irq_t irq);
void mailbox_omap_disable_irq(struct mailbox *mbox, mailbox_irq_t irq);
#else
static inline void mailbox_omap_save_ctx(struct mailbox *mbox)
{
}
static inline void mailbox_omap_restore_ctx(struct mailbox *mbox)
{
}
static inline void mailbox_omap_enable_irq(struct mailbox *mbox, mailbox_irq_t irq)
{
}
static inline void mailbox_omap_disable_irq(struct mailbox *mbox, mailbox_irq_t irq)
{
}
#endif

#endif
