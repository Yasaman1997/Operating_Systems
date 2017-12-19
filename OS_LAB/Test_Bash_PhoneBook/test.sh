#! /bin/bash
#search

searchname()
{
echo
echo "Enter Name: "
read name 
grep "$name" PhoneBook
RETURNSTATUS=`echo $?`
if [ $RETURNSTATUS -eq 1 ]
			then
			echo "No records found for \"$name\"."
		fi
echo
}


searchphone()
{
echo "Enter Phone: "
read phone
grep "$phone" PhoneBook
RETURNSTATUS=`echo $?`
if [ $RETURNSTATUS -eq 1 ]
			then
			echo "No records found for \"$phone\"."
		fi
echo
}

echo "What do you want to do ? "
echo "1) search name "
echo "2) search phone number"
echo "Enter your choice" 
read number 
case $number in 
1) searchname ;;
2) searchphone ;;
esac

