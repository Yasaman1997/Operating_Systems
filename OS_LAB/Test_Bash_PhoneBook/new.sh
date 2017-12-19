#! /bin/bash
#search

searchname()
{
echo
echo "Enter Name: "
read name 
grep "$phone" PhoneBook
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
grep "$name" PhoneBook
RETURNSTATUS=`echo $?`
if [ $RETURNSTATUS -eq 1 ]
			then
			echo "No records found for \"$phone\"."
		fi
echo
}


add()
{
echo "Enter Name: "
read name
echo "Name: $name" >> PhoneBook



echo "Enter Phone Number: "
read phone
echo "Phone: $phone" >> PhoneBook



echo " " >> PhoneBook


}


echo "What do you want to do ? "
echo "1) search name "
echo "2) search phone number"
echo "3) add new contact"
echo "Enter your choice" 
read number 
case $number in 
1) searchname ;;
2) searchphone ;;
3) add ;;
esac


