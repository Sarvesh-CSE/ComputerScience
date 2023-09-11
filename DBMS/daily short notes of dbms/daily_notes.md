## Sep 05, 23

1. SQL and SEQUEL
2. Alter Command and its variants
   * alter database name or table name or column name
   * modifiy the data type of column
  
3. Oracle live as an option to practice doing query on browser without installing any database server in local system
4. Access Control
5. Grant and Revoke Query
6. Note on DBA (Data Base Administrator)
7. what is view?
   * VIEW:- Small access of table, means limit access to data one can access from a table. 
            Grant access to user on view
8. Access to partial data table.
9. Access to only subset of row and column.
10. We can limit access by select query or Database administrator.

     ###                          ****** THE END ******

## 7th sep, 2023

1. What is data manipulation language.
2. What is data query language.
3. Rows(tupples)
      * CART  C-Column   A-attributes   R-ROWS   T-tupples
4. Data models in database design.
    * Conceptual model
    * Logical model
    * Physical model
5. Coupling and Cohesion
   * coupling should be low
   * cohesion should be high
6. Pull Request merging
7. Self joint
8. Normalisation (that is the idea for joints)
9. Anomaly
   * update
   * insert
   * delete
10. Data representation
  ###                                *********  THE END *******

  ## 09 Sep,2023

1. Anamoly :- **"It means the inconsistency occurred in the relational table during the operations performed 
                on the relational table ".**
              * There can be three types of anamoly
                 : UPDATE
                 : INSERT
                 : DELETE
2. **REDUNDANCY IS BAD OR GOOD ?**
    If we have one common column in the  table, then only we can join the two tables. So there is Redundancy is a good factor.
   Redundancy can never, ever be eliminate it can be eliminate only.

3. What is NORAMALISATION?
                : To remove the anomalies of the database, **NORMALISATION** is the process which is done where the splitting of the table and joining of the table 
                    (different types of join) occurs.
     ### TYPES OF NORMAL FORMS IN DBMS 
   <img
  src="https://cdn.hackr.io/uploads/posts/attachments/1666888816mdnYlrMoEE.png"
  alt="Alt text"
  title="TYPES OF NORMALISATION ">
     1. **First Normal Form (1NF)** 
         * It states that an attribute of a table cannot hold multiple value. It must hold only single-valued attribute.
         * First normal form disallows the multi-valued attribute, composite attribute, and their combinations.
    
    2. **Second Normal Form (2NF)** 
         * In the 2NF, relational must be in 1NF.
         * In the second normal form, all non-key attributes are fully functional dependent on the primary key.
    
    3. **Third Normal Form (3NF)**
        * A relation will be in 3NF if it is in 2NF and not contain any transitive partial dependency.
        * 3NF is used to reduce the data duplication. It is also used to achieve the data integrity.

    4. **Fourth normal form (4NF)** :-
        * A relation will be in 4NF if it is in Boyce Codd normal form and has no multi-valued dependency.
        * For a dependency A → B, if for a single value of A, multiple values of B exists, then the relation will be a multi-valued 
          dependency.
      
    5.  **Fifth normal form (5NF)** :-
         * A relation is in 5NF if it is in 4NF and not contains any join dependency and joining should be lossless.
         * 5NF is satisfied when all the tables are broken into as many tables as possible in order to avoid redundancy.

      ###                                *********  THE END *******



   ## 11 Sep,2023

   1. GROUP BY CLAUSE :-
    * The GROUP BY statement is often used with aggregate functions **(COUNT(), MAX(), MIN(), SUM(), AVG())** to group the result-set by one or more columns.
    * example:- <img src="https://www.boardinfinity.com/blog/content/images/2023/02/groupby-sql.png" >
    * Syntax of the SQL GROUP BY clause −
                                            SELECT column_name(s),count(*)
                                             FROM table_name
                                            GROUP BY column_name(s);
    * NESTED GROUP BY :-
    *                    which means that one group function can enclose an expression that is itself a group operation on another expression or column.
    * FOR MORE REFERENCE visit:- 
                                 https://sql-bits.com/groups-of-groups-in-sql/#:~:text=It%20means%20using%20nested%20GROUP,500%20views%2C%20and%20so%20on.

   2. Query Optimization:- Query optimization is the process of selecting an efficient execution plan for evaluating the query.

    ###                                *********  THE END *******

      
