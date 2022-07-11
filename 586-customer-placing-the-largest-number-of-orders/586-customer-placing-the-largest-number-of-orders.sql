declare @maxCnt int;

select @maxCnt = max(cnt)
from (select customer_number, count(*) as cnt
from orders
group by customer_number) sub;

select customer_number
from orders
group by customer_number
having count(*) = @maxCnt