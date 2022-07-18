select *
from products
unpivot (price for store in ([store1],[store2],[store3])) up