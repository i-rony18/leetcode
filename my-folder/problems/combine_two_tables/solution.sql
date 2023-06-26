# Write your MySQL query statement below
Select Person.firstName,Person.lastName,Address.city,Address.state FROM Person
LEFT JOIN Address
On Person.personId = Address.personId