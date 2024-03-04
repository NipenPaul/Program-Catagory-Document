# solid-principles-example

## 1. Single Responsibility Principle (SRP)
The single responsibility principle states that every 
Java class must perform a single functionality.
Implementation of multiple functionalities in a single 
class mashup the code.

## 2. Open-Closed Principle (OCP)
The Open-closed principle states that according to new 
requirements the module should be open for extension but 
closed for modification.

## 3. Liskov Substitution Principle (LSP)
It applies to inheritance in such a way that the
**derived class must be completely substitutable
for their base classes.** In other words, if
class A is a subtype of class B, then we should
be able to replace B with A without interrupting 
the behaviour of the program.

## 4. Interface Segregation Principle (ISP)
The principle states that the larger interfaces
split into smaller ones. Because the implementation 
classes use only the methods that are required.
We should not force the client to use the methods
that they do not want use.

## 5. Dependency Inversion Principle (DIP)
The principle states that we must use abstraction
(abstract classes and interfaces) instead of concrete
implementations. High-level modules should nto depend
on the low-level module but both should depend on the
abstraction.