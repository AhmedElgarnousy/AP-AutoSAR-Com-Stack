https://github.com/langroodi/Adaptive-AUTOSAR/wiki#operating-system-interface

Welcome to the Adaptive Runtime AUTOSAR Linux Simulator wiki! The project wiki consists of sections related to the project goal, the project scope and its alignment with the AUTOSAR Adaptive standard, and the project timeline. The aim of this project is to provide students/researchers in the automotive engineering a big picture of Adaptive Runtime AUTOSAR and an overview about how its interfaces should be implemented. This repository does not rely on any hardware requirement (e.g., an ECU emulator), but it is able to interact with some hardware interfaces (i.e., CAN bus and Ethernet).

## Project Scope

| Syntax    | Description |   Test Text |
| :-------- | :---------: | ----------: |
| Header    |    Title    | Here's this |
| Paragraph |    Text     |    And more |

## User Application

An Adaptive Application to interact with

## Communication Management

Partially implemented based on R20-11 and R22-11:

<ul>
  <li>E2E communication protection (ara::com::e2e) is limited to Profile11 based on R22-11.</li>
  <li>Raw data streaming (ara::com::raw) is out of scope.</li>
  <li>Communication Group (ara::com::cg) is not fully implemented yet.</li>
  <li>Network binding is limited to SOME/IP (Signal-Based and DDS network bindings are out of scope):
  <ul>
  <li>SOME/IP Service Discovery (SD) only supports IPv4 endpoints.</li>
   <li>Network link status change is not simulated in the SD finite state machine (FSM).</li>
    <li>SD Client Requested_but_not_read state is removed from the FSM.</li>
    <li>The ara::com::someip::sd and ara::com::someip::pubsub namespaces and their sub-namespaces are not part of the official standard.</li>
    
  </ul></li>
  <li> Secure Onboard Communication (ara::com::secoc) is out of scope.</li>
</ul>

## RESTful

Out of scope (Obsolete in R21-11)

## Time Synchronization

Out of scope

## State Management

The scope of the State Management (SM) is limited to the initialization of the Machine Function Group (Machine FG). The State Management development is based on R21-11.

## Persistency

Out of scope

## Platform Health Management

Partially implemented based on R22-11:

<ul> 
  <li>Alive Supervision is implemented. </li>
  <li>Deadline Supervision is implemented. </li>
  <li> Logical Supervision is out of scope.</li>
</ul>

## Log & Trace

The Log & Trace is mostly implemented based on R20-11:

<ul> 
  <li>Log sinks are limited to console and file sinks (network sink is out of scope).</li>
  <li>The ara::log::sink namespace is not part of the official standard.</li>
  <li> 
Current implementation does not support hexadecimal format, binary format, and ClientState logging.</li>
</ul>

## Network Management

Out of scope

## Core Types

It is barely implemented partly based on R21-11 and partly based on R20-11. The implementation scope is as follows:

| Data type | Implementation revision | Compatibility | Replaced alternative |
| :-------- | :---------------------: | ------------: | -------------------: |
| Header    |          Title          |   Here's this |                   -- |
| Paragraph |          Text           |      And more |                   -- |

## Execution Management

The development is in progress based on R21-11:

<ul> 
  <li>Execution Error Event struct:
  <li>In contrast with the standard, the structure keeps pointer to the Function Group in Undefined State instead of the Function Group itself.
  </li>
  </li>
  <li>Execution Client class:

There is no default constructor same as the standard and the object owner should pass the Instance Identifier and the Communication Layer (for remote procedure calling).

</li>
  <li> 
Deterministic Client class:

noexcept specifiers are not aligned with the standard.

</li>
  <li> 
Function Group class:

noexcept specifiers are not aligned with the standard.
No ARXML meta-model validation mechanism is implemented.
GetInstance method is not aligned with the standard.

</li>
  <li> 
Function Group State class:

noexcept specifiers are not aligned with the standard.
No ARXML meta-model validation mechanism is implemented.
GetFunctionGroup and GetState methods are not aligned with the standard.

</li>
  <li> 
Exec Exception class:

MakeErrorCode method does not consider manufacture specific SupportData.

</li>
  <li> 
State Client class:

The class constructor takes IPC abstraction layer as well which is not aligned with the standard.
noexcept and const specifiers are not aligned with the standard.
Undefined Function Group State concept is not implemented.

</li>
</ul>

Execution Client class:

There is no default constructor same as the standard and the object owner should pass the Instance Identifier and the Communication Layer (for remote procedure calling).
Deterministic Client class:

noexcept specifiers are not aligned with the standard.
Function Group class:

noexcept specifiers are not aligned with the standard.
No ARXML meta-model validation mechanism is implemented.
GetInstance method is not aligned with the standard.
Function Group State class:

noexcept specifiers are not aligned with the standard.
No ARXML meta-model validation mechanism is implemented.
GetFunctionGroup and GetState methods are not aligned with the standard.
Exec Exception class:

MakeErrorCode method does not consider manufacture specific SupportData.
State Client class:

The class constructor takes IPC abstraction layer as well which is not aligned with the standard.
noexcept and const specifiers are not aligned with the standard.
Undefined Function Group State concept is not implemented.
Identity Access Management
Out of scope

Cryptography
Out of scope

Update and Configuration Management
Out of scope

Operating System Interface
Currently, there is a wrapper interface around BSD sockets to enable functional clusters (e.g., Communication Management) for interacting via TCP/IP protocol.

Project milestones and timeline
Following is the project timeline and its specified milestones within 4 years:
