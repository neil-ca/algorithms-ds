# Getting started with Network Programming

## Will learn the basics of networking, the relevant network protocol, and basic socket programming.

Networking encompasses concerns at many different abstraction levels. The concerns your
router has with forwarding network packets. Let's look at these models.

## OSI layer model
Protocols define everything from the voltage levels on an Ethernet cable to how 
a JPEG image is compressed on a web page. It's cleart that, when we talk about the voltage
on a Ethernet cable, we are at much different level of abstraction. For this reason, 
we breake the problem down into many smaller pieces. 
The most popular layer system is called the **Open Systems Interconnection**. It has seven layers:

![alt text](https://media.geeksforgeeks.org/wp-content/uploads/computer-network-osi-model-layers.png)

* Physical(1):This is the level of physical communications in the real world. At 
this level, we have specifications for things such as the voltage levels on an  
Ethernet cable, what each pin on a connector is for, the radio frequency of Wi-Fi, and the light flashes over an optic fiber.
* Data Link(2):This level builds on the physical layer. It deals with protocols for directly 
communicating between two nodes. It defines how a direct message between nodes starts and ends (framing), 
error detection and correction, and flow control. 
* Network layer(3): The network layer provides the methods to transmit data sequences (called packets) between nodes in different networks. It
provides methods to route packets from one node to another (without a direct physical
connection) by transferring through many intermediate nodes. Thisi is the layer that the 
Internet Protocol is defined on, which we will go into in some depth later.
* Transport layer (4): At this layer, we have methods to reliably deliver variable
length data between hosts. These methods deal with splitting up data,
recombining it, ensuring data arrives in order, and so on. The Transmission
Control Protocol (TCP) and User Datagram Protocol (UDP) are commonly said
to exist on this layer.
* Session layer (5): This layer builds on the transport layer by adding methods to
establish, checkpoint, suspend, resume, and terminate dialogs.
* Presentation layer (6): This is the lowest layer at which data structure and
presentation for an application are defined. Concerns such as data encoding,
serialization, and encryption are handled here.
* Application layer (7): The applications that the user interfaces with (for example,
web browsers and email clients) exist here. These applications make use of the
services provided by the six lower layers.

## TCP/IP layer model
The **TCP/IP protocol suite** is the most common network communication in use today.
The TCP/IP reference model differs a bit from the OSI model, as it has only 
four layers instead of seven.

![](https://nebul4ck.files.wordpress.com/2015/02/ositcpip1.png?w=960&h=933)

* Network Access layer(1): On this layer, physical connections and data framing happen.
Sending an Ethernet or Wi-Fi packet are examples of layer 1 concerns.
* Internet layer(2): This layer deals with the concerns of addressing packets and 
routing them over multiple interconnections networks. It's at this layer that an IP address is defined.
* Host-to-Host layer(3): The host-to-host layer provides two protocols, TCP and UDP, these protocols
address concerns such as data order, data segmentation, network congestion, and error connection.
* Process/Application layer(4): The process/application layer is where protocols such as HTTP, SMTP, and FTP 
are implemented. 

## Data encapsulation
The advantage of these abstraction is that, when programming an application, we only need to consider 
the highest-level protocol. For example, a web browser needs only to implement the protocols dealing 
specifically with HTTP, HTML, CSS, and so on. 
It does not need to bother with implementing TCP/IP, and it certainly doesn't have to understand
how an Ethernet or Wi-Fi packet is encoded. It can rely on ready-made
implementations of the lower layers for these tasks. These implementations are provided by
the operating system (for example, Windows, Linux, and macOS).