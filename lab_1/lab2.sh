echo "Enter No 1: "
read a
echo "Enter No 2: "
read b
echo "Enter No 3: "
read c
if [ $a -gt $b -a $a -gt $c ]
then
	echo "The greatest is A"
elif [ $b -gt $a -a $b -gt $c ]
then
	echo "The greatest is B"
else
	echo "The greatest is C"
fi

