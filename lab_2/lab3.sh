echo "enter a number"
read a
if [ $(( a%2 )) -eq 0 ]
then 
	echo "The number is Even"

else
	echo "The number is Odd"
fi
