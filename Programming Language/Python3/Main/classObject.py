class MyClass:
  pass
obj = MyClass()
obj.name = "Nipen"
obj.id = 174038
print(f"Name = {obj.name}, ID = {obj.id}\n")

class Student:
  def __init__(self, firstName: str, lastName: str, stdId: int):
    self.__firstName = firstName
    self.lastName = lastName
    self.stdId = stdId

  def getFirstName(self):
    return self.__firstName

  def setFirstName(self, updateFirstName):
    self.__firstName = updateFirstName

  def display(self):
    return f"First Name = {self.__firstName}, Last Name = {self.lastName}, Student ID = {self.stdId}"
  
  def __str__(self):
    return self.display()  

stu = Student("Nipen", "Paul", 174038)
print(stu.display())
print()
print(stu)
print(stu.getFirstName())
stu.setFirstName("Papon")
print(stu.getFirstName())
print(stu)