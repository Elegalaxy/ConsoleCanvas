main: account.o task.o classroom.o student.o teacher.o
	g++ -o main main.cpp

task:
	g++ -c task.h task.cpp

calender:
	g++ -c calender.h calender.cpp

classroom:
	g++ -c classroom.h classroom.cpp

account:
	g++ -c account.h account.cpp

student:
	g++ -c student.h student.cpp

teacher:
	g++ -c teacher.h teacher.cpp