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

Computing devices hooked to the internet are called end systems because they sit at the *edge* of the internet network. The ***access network*** is the connection between an end system and the first router it connects to. It serves as the first step for end systems to connect to the core network, which serves as the backbone of the internet by handling large-scale data transmission.

End systems are also referred to as hosts because they *host* application programs. There are two kinds of hosts: clients and servers. While clients are commonly smartphones and PCs, servers tend to be more powerful machines, like large data centers.

The two main types of broadband access for homes are **digital subscriber line (DSL)** and cable. With DSL, homes get internet access from the same local telephone company that provides their phone service, meaning the telephone company is also the internet service provider (ISP).

A **DSL modem** in the home uses the existing phone line to send and receive data. This data is converted into high-frequency tones and then sent to a **splitter**. The splitter separates the data signals from the telephone signals, allowing the data signals to be sent over the telephone line

.

At the **local telephone company's central office (CO)**, the data signals reach a device called a **DSLAM**. The DSLAM separates the data and phone signals, sending the data into the Internet. The splitter also works in the opposite direction, receiving data from the DSLAM and directing it appropriately as internet and telephone signals within the home.

Hundreds or even thousands of households connect to a single DSLAM, enabling efficient data management and internet access.

*How does broadband access compare to cable?*  Cable is generally faster and has lower latency compared to DSL but can be expensive and less reliable during peak times. DSL is more widely available in rural areas, offers more consistent speeds, and is often more affordable.

DSL transmission rates generally follow the same standards, defined by international organizations such as the International Telecommunication Union (ITU) and the American National Standards Institute (ANSI). These standards specify a range of maximum transmission rates, with downstream rates typically much faster than upstream rates, resulting in asymmetric access. Downstream refers to data sent from the internet to your home (like downloading files), while upstream refers to data sent from your home to the internet (like uploading files). These are considered "maximum transmission rates" because actual speeds are often lower. This can be due to service providers offering higher speeds at higher prices or because of technical factors like greater distances from the central office reducing the transmission rates.

***Cable internet access*** utilizes the cable TV company's infrastructure, providing internet from the same company. Fiber optics connect the ***cable head end*** to ***neighborhood junctions***, which use coaxial cables to reach homes, supporting 500 to 5,000 homes per junction. This system, called ***hybrid fiber coax (HFC)***, requires cable modems that connect to the home PC via Ethernet. The ***Cable Modem Termination System (CMTS)*** at the cable head end converts analog signals from the modems back into digital format. Similar to DSL, cable modems divide the network into downstream and upstream channels, with typically higher rates for downstream for the same reasons.

In cable internet systems, both downstream and upstream channels are shared mediums. Downstream, the head end broadcasts data to all homes on the network segment, leading to reduced speeds for each user if many are downloading simultaneously. Upstream, homes share the same channel to send data back to the head end, causing potential collisions when multiple homes transmit simultaneously. To prevent collisions and manage data flow, distributed multiple access protocols are used, ensuring coordinated transmissions and maintaining fair bandwidth distribution among users.