create database paralelas;
use paralelas;

create table students
(
	id_students int(20) primary key,
    first_name varchar(20),
    last_name varchar(20),
    email varchar(20)
);

create table teachers
(
	id_teachers int(20) primary key,
    first_name varchar(20),
    last_name varchar(20),
    email varchar(200),
    birthdate date default null
);

create table courses
(
	id_courses int(20) primary key,
    id_teachers_fk int(20),
    code_course varchar(20),
    name_course varchar(20),
    start_date date default null,
    end_date date default null,
    foreign key(id_teachers_fk)references teachers(id_teachers)
);
create table exams
(
	id_exams int(20) primary key,
    id_courses_fk int,
    exam_date date default null,
    name_exam varchar(20),
    foreign key(id_courses_fk)references courses(id_courses)
);
create table evaluations
(
	id_evaluations int(20) primary key,
    id_students_fk int,
    id_exams_fk int,
    score int(20),
    foreign key(id_students_fk)references students(id_students),
    foreign key(id_exams_fk)references exams(id_exams)
);
