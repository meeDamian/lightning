#ifndef LIGHTNING_GOSSIPD_GOSSIP_CONSTANTS_H
#define LIGHTNING_GOSSIPD_GOSSIP_CONSTANTS_H

/* BOLT #4:
 *
 * - Length: the maximum route length is limited to 20 hops.
 *...
 * 1. type: `onion_packet`
 * 2. data:
 *    * [`byte`:`version`]
 *    * [`point`:`public_key`]
 *    * [`1300*byte`:`hops_data`]
 */
#define ROUTING_MAX_HOPS 20

/* BOLT #7:
 *
 * The `flags` bitfield...individual bits:
 *...
 * | 0             | `direction` | Direction this update refers to. |
 * | 1             | `disable`   | Disable the channel.             |
 */
#define ROUTING_FLAGS_DIRECTION (1 << 0)
#define ROUTING_FLAGS_DISABLED  (1 << 1)

/* BOLT #7:
 *
 * The `message_flags` bitfield is used to indicate the presence of optional
 * fields in the `channel_update` message:
 * | Bit Position  | Name                      | Field                |
 * | ------------- | ------------------------- | -------------------- |
 * | 0             | `option_channel_htlc_max` | `htlc_maximum_msat`  |
 */
#define ROUTING_OPT_HTLC_MAX_MSAT (1 << 0)

/* BOLT #7:
 *
 * - MUST NOT send `announcement_signatures` messages until `funding_locked`
 *   has been sent AND the funding transaction has at least six confirmations.
 */
#define ANNOUNCE_MIN_DEPTH 6

#endif /* LIGHTNING_GOSSIPD_GOSSIP_CONSTANTS_H */
