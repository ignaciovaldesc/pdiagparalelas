SELECT name_course as "Nombre curso",
start_date as "Año inicio curso", 
avg(score) as 'Promedio', 
stddev(score) as 'Desviacion estandar',
min(score) as 'Nota minima',max(score) as 'Nota maxima'
from evaluations inner join exams on evaluations.id_exams_fk=exams.id_exams
inner join courses on exams.id_courses_fk=courses.id_courses group by 
name_course and start_date;