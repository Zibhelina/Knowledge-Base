# Chapter 1

## Section 1.1 - What is the Internet?

***The internet*** is a network that connects computing devices all over the world. These computing devices connected to the internet are called ***hosts*** or ***end systems***.

End systems send information to each other in ***packets***, each packet containing two pieces of information: the payload (data to be sent), and the header ( information regarding the sender, recipient, and other control information ). These pieces of information are transmitted via ***communication links*** and ***packet switches***. The ***transmission rate***, measured in bits per second, is the rate at which these communication links can transmit data over the network. 

- What is the difference between communication links and packet switches?
    - By definition, communication links are physical or logical connections that transmit data between devices in a network, while packet switches are devices that receive incoming data packets and forward them based on their destination. The difference between them is that communication links do not make decisions as to where data goes, it simply carries data, whereas packet switches analyze the destination information from incoming packets and decide where to forward them.
- Who owns these communication links and packet switches?
    - A bunch of entities from internet service providers to educational and research institutions have their own packet switches. Internet Service Providers have these packet switches to allow their customers to communicate over the internet, Data Centers have their own packet switches to allow efficient communication between their data centers, Enterprises have their own packet switches to connect various department, offices and data centers.
- Why can’t end systems communicate with each other directly?
    - If we had every computer connect with each other directly, then computers would only be able to communicate with relatively close computers due to physical constraints. So if we wanted to fix that, we would need our computer to decide a path for the packets to travel through, and every computer on the internet would be itself a packet switch. What is the problem with that? Well, computers would be overwhelmed by the task of not only deciding where to send its data packets, but also deciding where to send each packet itself receives from other computing devices on the internet. So having every computer work as a packet switch is too overwhelming, and thus, having a specialized devices to manage packet switches turned out to be a good idea.

Packet switches receive packets from incoming communication links and forward them to outgoing communication links based on the packet’s destination. There are two main types of packet switches: ***routers*** and ***link-layer switches***. A ***route*** or a ***path*** through the network is the term used to describe the sequence of communication links and packet switches that a packet goes through from the sender to the recipient.

- Do packet switches have a single function only? Packet switches have a bunch of functions, but they all seem to be related to data transmission.
- What is the difference between link-layer switches and routers? While routers transmit data between networks, link-layer switches transmit data within the same network.

“Packets are analogous to trucks, communication links are analogous to highways and roads, packet switches are analogous to intersections, and end systems are analogous to buildings”

There are many types of Internet Service Providers (ISPs) and they connect end systems at different scales. ***Lower-tier ISPs*** provide internet access to users and organizations, including residential broadband, high-speed local area network access, and mobile wireless access, while ***upper-tier ISPs*** provide connection between lower-tier ISPs through high-speed routers and fiber-optic links.

The internet relies on ***network protocols***, a set of standardized rules, to ensure smooth and consistent transmission of data over the network. Formally, a protocol is defined as follows: 

> A ***protocol*** defines the format and order of messages exchanged between two or more communicating entities, as well as the actions taken on the transmission and/or receipt of a message or other event.
> 

The two most important protocols running on the internet today are the ***Transmission Control Protocol (TCP)*** and the ***Internet Protocol (IP)***.

To ensure consistent understanding of internet protocols such as TCP, IP, HTTP, SMTP and many others, the ***Internet Engineering Task Force (IETF)*** develops detailed documents called ***requests for comments (RFCs)***.

***Distributed applications*** are applications that run on multiple end systems and exchange data with each other. The internet serves as a platform for these applications, enabling their distribution and connection across various end systems. To make the exchange between distributed applications possible, the Internet provides a socket interface. The ***socket interface*** is a high-level software abstraction designed to enable programmers to send and receive data using a chosen protocol without needing to manage the low-level details of the network communication.

## Section 1.2 - The Network Edge

Computing devices hooked to the internet are called end systems because they sit at the *edge* of the internet network. The ***access network*** is the first point of entry for end systems to connect to the core network, which serves as the backbone of the internet by handling large-scale data transmission.

End systems are also referred to as hosts because they *host* application programs. There are two kinds of hosts: clients and servers. While clients are commonly smartphones and PCs, servers tend to be more powerful machines, like large data centers.