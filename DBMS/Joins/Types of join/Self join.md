A self-join in SQL joins a table to itself. This means that each row in a table is joined to itself and every other row in that table. 

* To use a self-join, the table must include: 
 * A column (X) that operates as the primary key
 * Another column (Y) that holds data that can be matched up with the values in Column X

### Syntax
*                   SELECT column_name(s)
*                   FROM table1 a, table1 b
*                   WHERE a.common_field = b.common_field;

<img src ="https://cdn.educba.com/academy/wp-content/uploads/2020/03/student-id.jpg">