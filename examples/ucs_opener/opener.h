#ifndef __UCS_OPENER_OPENER_H__
#define __UCS_OPENER_OPENER_H__



#define OPENER_AGENT_INET6_ADDR     "fe80::12e2:d5ff:ff00:1fa"      // micro-ROS agent IPv6 address
#define OPENER_AGENT_UDP_PORT       "9999"                          // UDP port agent is listening on; below 10000
#define OPENER_NODE                 "use_case_sensor"                // node name max 39 char
#define OPENER_TOPIC                "opener_cmd"                    // topic name max 39 char
#define OPEN_CMD                    1                               // command 'open the door'
#define CLOSE_CMD                   2                               // command 'close the door'
#define ON                          1                               // output logic level in state ON
#define OFF                         0                               // output logic level in state OFF
#define OPENER_DELAY                3                               // switching OFF delay; based on number of programme loops


#endif /* __UCS_OPENER_OPENER_H__ */
