![question-1.png](question-1.png)
![question-1.png](question-2.png)

# 1

  - **[Physical Layer]**: The job is to provide a physical connection between networked computers, or hosts. A physical medium is necessary for the transmission of information. Twisted pair Cat 6 cable, phone lines, coaxil cable and etc. Is not necessary the physical connection be tangible. As anyone with a mobile, table or laptop.
  - **[Link Layer]**:  is where the real compute science of the layer cake begins. It's job is to provide a method of comunication between physically connected hosts.
  - **[Network Layer]**: The link layer provides a clear way to send data from an addressable host to one or more
    similarly addressable hosts. The job is to facilitate communication between distant hosts on remote
    networks.
  - **[Transport Layer]**:  The job is the enable communication between individual processes on those host. Some protocols used to communication UDP (User Datagram Protocol) and TCP (Transmission Control Protocol).
  - **[Application Layer]**: The jobs is where our multiplayer game code lives. The application layer is also home to many fundamental protocols of the internet the rely on the transport layer for end-to-end communication. Examples: DCHP, DNS.

  *The network Layer is not considered a seperate layer because works together "link layer"*
  

# 2
Is technically a link layer protocol because it sends out packets directly using 
link layer style addresses and does not require the routing between networks
provided by the network layer. However, because the protocol violates some
network layer abstractions by including network layer IP addresses, it can be useful
to think of it more as a bridge between the layers than as a solely link layer protocol.

The arp consist of two parts main parts: a packet structure of querying the MAC address of the NIC associated with a particular IP address, and a table for keeping track of those pairings.

![arp.png](arp.png)
 
# 3
![multipleNIC.png](multipleNIC.png)

Host R is a special type of host known as a router . A router has multiple NICs, each with its
own IP address. In this case, one is connected to Network Alpha, and the other is connected
to Network Bravo. Notice that all the IP addresses on Network Alpha share the prefix 18.19.100
and all the addresses on Network Bravo share the prefix 18.19.200.

# 4
This is known as the **maximum transmission unit , or MTU** , because it is the maximum amount
of data that can be conveyed in a single transmission. The MTU of Ethernet is 1500 bytes.


# 5

# 6
As mentioned earlier, the MTU, or maximum payload size, of an Ethernet frame is 1500 bytes.
However, as noted previously, the maximum size of an IPv4 packet is 65535 bytes. This raises
a question: If an IP packet must be transmitted by wrapping it in a link layer frame, how can it
ever be larger than the link layer’s MTU? The answer is fragmentation . If an IP module is asked
to transmit a packet larger than the MTU of the target link layer, it can break the packet up into
as many MTU-sized fragments as necessary.

# 7
  Because reduce exchange bandwith between machines.

# 8
**[Unreliable]**: Send messages without any guarantees and messages are not guaranteed to arrive, but out-of-order
messages are dropped. This is useful for voice communication.

**[Reliable]**: The message is guaranteed to arrive as long as the connection is not disconnecte and the message is guaranteed to arrive as long as the connection is not disconnected.


# 9 and 10
Here first show how behavior TCP.
![tcp-flow-1.png](tcp-flow-1.png)

Here Second show exchange of packets between 2 machines are Host A and Host B
![tcp-flow-2.png](tcp-flow-2.png)

Here finally show multiple flow when a packet lost and retransmitted.
![tcp-flow-3.png](tcp-flow-3.png)


# 11
Because the privately addressed NIC is connected to the local network, it is called a local area network ( LAN ) port, and because the publically
addressable NIC is connected worldwide, it is called the wide area network ( WAN ) port.

# 12
NAT stands for network address translation. It’s a way to map multiple local private addresses to a public one before transferring the information. Organizations that want multiple devices to employ a single IP address use NAT, as do most home routers.

# 13
Let’s say that there is a laptop connected to a home router. Someone uses the laptop to search for directions to their favorite restaurant. The laptop sends this request in a packet to the router, which passes it along to the web. But first, the router changes the outgoing IP address from a private local address to a public address.

If the packet keeps a private address, the receiving server won’t know where to send the information back to — this is akin to sending physical mail and requesting return service but providing a return address of anonymous. By using NAT, the information will make it back to the laptop using the router’s public address, not the laptop’s private one.
![nat.png](nat.png)

# 14
Session Traversal Utilities for NAT is a standardized set of methods, including a network protocol, for traversal of network address translator gateways in applications of real-time voice, video, messaging, and other interactive communications.
To facilitate the creation of private networks with minimal oversight, NAT allows a single public
IP address to be shared by an entire network. A drawback of NAT is that it blocks unsolicited
incoming connections that a server might desire, but there are techniques such as STUN and
TCP hole punching which provide workarounds for thi