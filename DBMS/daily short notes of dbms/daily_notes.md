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

   3.1  **Boyce-Codd Normal Form (BCNF)**
          * The table should be in the 3rd Normal Form.
          * X should be a superkey for every functional dependency (FD) X−>Y in a given relation.

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
      *                                     SELECT column_name(s),count(*)
                                             FROM table_name
                                            GROUP BY column_name(s);
    * NESTED GROUP BY :-
      * which means that one group function can enclose an expression that is itself a group operation on another expression or column.
    * FOR MORE REFERENCE visit:- 
                                 https://sql-bits.com/groups-of-groups-in-sql/#:~:text=It%20means%20using%20nested%20GROUP,500%20views%2C%20and%20so%20on.

   2. Query Optimization:- Query optimization is the process of selecting an efficient execution plan for evaluating the query.

    ###                                *********  THE END *******


## 12 Sep, 2021

1. Data Mart :-
 * Data marts make specific data available to a defined group of users, which allows those users to quickly access 
   critical insights without wasting time searching through an entire data warehouse.

2. Transaction :-
   * A transaction can be defined as a group of tasks. A single task is the minimum processing unit which cannot be 
    divided further.
  * It follows **ACID** property.
  * ACID stands for "ATOMICITY"; "CONSISTENCY"; "ISOLATION"; "DURABILITY" .
    <img src="https://cdn1.byjus.com/wp-content/uploads/2022/03/word-image159.png">

3. MULTI-VALUED ATTRIBUTE :-
   * Multi-valued attributes can take up and store more than one value at a time for an entity instance from a set 
     of possible values.
   * Multi valued attributes are represented by double-lined ellipse.
   * <img src="https://prepinsta.com/wp-content/uploads/2023/02/MultiValued-Attribute-in-DBMS.webp">

4. COMPOSITE ATTRIBUTE :-
   * Composite attributes in DBMS are those attributes that can further divide into more simple attributes.
   * <img src="https://prepinsta.com/wp-content/uploads/2023/01/Composite-Attribute-in-DBMS-img.webp">

5. COMPOSITE KEY :-
   * composite key is a candidate key that consists of two or more attributes (table columns) that together uniquely 
      identify an entity occurrence (table row).
   * <img src="https://prepinsta.com/wp-content/uploads/2023/02/composite-Key-in-DBMS.webp">

6. SRS = SOFTWARE REQUIREMENT SPECIFICATION .
   * A software requirements specification (SRS) is a document that describes what the software will do and how it 
    will be expected to perform. It also describes the functionality the product needs to fulfill the needs of all 
    stakeholders (business, users).
   * <img src="https://s7280.pcdn.co/wp-content/uploads/2017/09/srs-software-requirement-specifications- 
      1024x754.jpg.optimal.jpg">

7. **TYPES OF KEYS**
    <img src="https://cdn.ttgtmedia.com/rms/onlineimages/data_management-database_keys.png">
    <img src="https://media.geeksforgeeks.org/wp-content/uploads/20230314174012/Different-types-of-keys.png">
    
    * SUPER KEY :-
      Super key is a single key or a group of multiple keys that can uniquely identify tuples in a 
      table.
       <img src="https://i.ytimg.com/vi/DhZP4ezG8Oo/maxresdefault.jpg">

    * PRIMARY KEY :-
      <img src="https://prepinsta.com/wp-content/uploads/2023/01/Primary-Key-in-DBMS.webp">

    * CANDIDATE KEY :-
      <img src="https://prepinsta.com/wp-content/uploads/2023/01/Candidate-Key-in-DBMS.webp">


    * ALTERNATE KEY :-
     <img src="https://prepinsta.com/wp-content/uploads/2023/01/Alternate-Key-in-DBMS.webp">


   * FOREIGN KEY :-
     <img src="https://image.slidesharecdn.com/dbms-typesofkeys-180707062120/75/dbms-types-of-keys-8-2048.jpg?cb=1666011192">


    * COMPOSITE KEY :-
    * composite key is a candidate key that consists of two or more attributes (table columns) that 
      together uniquely 
      identify an entity occurrence (table row).
    * <img src="https://prepinsta.com/wp-content/uploads/2023/02/composite-Key-in-DBMS.webp">


9. ### PRIME AND NON- PRIME ATTRIBUTE :-

  **Prime attributes in DBMS** :- 
  * A prime attribute is one of the attributes that make up the candidate key. In addition to being called prime 
    attributes, key attributes is another name for this type of attribute. It is also present in all of the 
    candidate keys.
  * A set of attributes that uniquely identify tuples in a table is known as a Candidate Key. Candidate Key is a 
    super key with no attributes that are repeated.
 * They are key attributes because they can be used to uniquely identify any of the table's records.

**Non-prime attributes in DBMS** :-
 * Non-prime attributes are those attributes of the relationships that do not present in any of the possible 
   candidate keys of the relation.
 * They are also known as non-key attributes. A primary key is an attribute or group of attributes used to uniquely 
   identify any record in a table. The values of a primary key cannot be duplicated.
*  Non-prime (non-key) attributes are those that are not the primary key attributes. They can store a value an 
   unlimited number of times. They are non-key attributes because they cannot be used to uniquely identify any of 
   the table's records.

  ###                                *********  THE END *******

  ## 14 Sept ,2023

  1. Functional Dependency :-
    *  Functional dependency in DBMS refers to a relationship that is present between attributes 
       of any table that are dependent on each other.


  2. ### RULES / Armstrong's Axioms for FDs:-
   <img src="https://sceweb.uhcl.edu/yang/teaching/csci5333Fall04/FDinferenceRules.GIF">
  
  4. **TYPES OF FUNCTIONAL DEPENDENCY**
     * The Functional Dependencies are of four major types:

          * Trivial FD
          * Non-Trivial FD
          *  Completely Non-Trivial FD
          *  Transitive FD
          *  Fully Functional Dependency
          *  Partial Functional Dependency
     * Example
    Let us look at an example that makes it easier to comprehend functional dependency.
    
    Suppose we have a <Student> table with two separate attributes − Stu_Id and Stu_Name.
    
    Stu_Id = Student ID
    
    Stu_Name = Student Name
    
    The StuId is our primary key. And StuId here identifies the StuName attribute uniquely. It is 
     because if someone 
    wants to know the student’s name, then you need to have the StuId at first.
    <img src = "https://miro.medium.com/v2/resize:fit:654/1*_vjy4icscEIPolFRh3axTg.png">   
    
    * Trivial Functional Dependency :-
        *A trivial functional dependency occurs when Q is a subset of P in −

      P ->Q
      
      For example,
      
      Let us now consider the same <Section> table with two separate attributes to comprehend the 
      trivial dependency’s concept. Here is a trivial functional dependency because SecId is a subset 
      of SecId and SecName.
      
      { Sec_Id, Sec_Name } -> Sec Id

    * Non - Trivial Dependency :-
        * A non-trivial functional dependency occurs when Q is not a subset of P in −
              
          P -> Q
              
          For example,
              
          Sec_Id -> Sec_Name
              
          The FD given above is a functional dependency that is of a non-trivial type since 
          SecName is not a subset of SecId.


    * Completely Non-Trivial Functional Dependency :-
      * A completely non-trivial functional dependency occurs when P intersection Q is null in −
         P -> Q .

      * Transitive FD:-
         * if A -> B and B -> C are true, then A -> C happens to be a transitive dependency.
         * The given functional dependency can only be transitive when it is formed indirectly by two 
           FDs

 * Fully Functional Dependency & Partial Dependency  :-
   <img src="https://slideplayer.com/slide/15408745/93/images/36/Full+Functional+Dependency+vs.+Partial+Dependency.jpg">

5. **Representation of WEAK WNTITY AND STRONG ENTITY**:-
   <img src="https://www.scaler.com/topics/images/strong-and-weak-entity-in-dbms-thumbnail.webp">

6. CLOSURE METHOD :-
   * To find all the set of candidate key in a given set of relation.

7. Prime Attribute :- Part of Primary key.
8. Non Prime attribute :- Does't a part of primary key.

9.  FACT,DATA,KNOWLEDGE,INFORMATION,WISDOM.


###                                *********  THE END *******

   

 
        
        
