class Student:
    """Details On Students"""
    count=0
    def __init__(self, name, dept):
        self.name=name
        self.dept=dept
        Student.count+=1
    
    def total_student(self):
        print(f"{Student.count = }")

    def display(self):
        print(f"Name {self.name}, Department {self.dept}")

stud = Student("Amal", "CS")
stud.total_student()
stud.display()
print(Student.__doc__)

print(getattr(stud, "name")) 
print(hasattr(stud, "dept"))
print(delattr(stud, "dept"))
print(hasattr(stud, "dept"))
setattr(stud, "name", "sibi")
print(getattr(stud, "name"))
