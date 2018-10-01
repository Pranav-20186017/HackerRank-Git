 select distinct city 
 from station 
 where city RLIKE '^[^aeiouAEIOU].*' AND 
 city RLIKE '^.*[^aeiouAEIOU]$';