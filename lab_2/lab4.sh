echo "Enter a number"
read a
c=0
b=1
while (( $a -ne 0 ))
do
	echo $(( b + c ))
	d = $b
	c = $(( b + c ))
	b = $d
 	a = $(( a - 1 ))
done
