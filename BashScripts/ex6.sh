#!/usr/bin/env bash

#read -p "Enter string in english:" string

read -p "Enter a string:" string
declare -A heb_dic
heb_dic[0x0ce0]="א"
heb_dic[0x0ce1]="ב"
heb_dic[0x0ce2]="ג"
heb_dic[0x0ce3]="ד"
heb_dic[0x0ce4]="ה"

heb_dic[0x0ce5]='ו'
heb_dic[0x0ce6]='ז'
heb_dic[0x0ce7]='ח'
heb_dic[0x0ce8]='ט'
heb_dic[0x0ce9]='י'

heb_dic[0x0ceb]='כ'
heb_dic[0x0cec]='ל'
heb_dic[0x0ced]='מ'
heb_dic[0x0cf0]='נ'
heb_dic[0x0cf1]='ס'
heb_dic[0x0cf2]='ע'

heb_dic[0x0cf4]='פ'
heb_dic[0x0cf6]='צ'
heb_dic[0x0cf7]='ק'

heb_dic[0x0cf8]='ר'
heb_dic[0x0cf9]='ש'
heb_dic[0x0cfa]='ת'

heb_dic[0x0cef]='ן'
heb_dic[0x0cea]='ך'
heb_dic[0x0cf3]='ף'
heb_dic[0x0cf5]='ץ'
heb_dic[0x0ced]="ם"
heb=('-' '=' '{' '}' '[' ']' '?' '|' '' '~' '"' '!' '&' '1' '2' '3' '4' '5' '6' '7' '8' '9' '0' '@' '#' '$' '%' '^' '&' '(' ')' '/' "'" 'ק' 'ר' 'א' 'ט' 'ו' 'ן' 'ם' 'פ' 'ש' 'ד' 'ג' 'כ' 'ע' 'י' 'ח' 'ל' 'ך' 'ף' 'ז' 'ס' 'ב' 'ה' 'נ' 'מ' 'צ' 'ת' 'ץ')
eng=('-' '=' '{' '}' '[' ']' '?' '|' '' '~' '"' '!' '&' '1' '2' '3' '4' '5' '6' '7' '8' '9' '0' '@' '#' '$' '%' '^' '&' '(' ')' 'q' 'w' 'e' 'r' 't' 'y' 'u' 'i' 'o' 'p' 'a' 's' 'd' 'f' 'g' 'h' 'j' 'k' 'l' ';' 'z' 'x' 'c' 'v' 'b' 'n' 'm' ',' '.')
arr=()
str=()

if [[ $(/home/olga/src/xkblayout-state/xkblayout-state print %n) == "English" ]]
then
    for ((i=0;i<${#string}; i++));do
        ch=${string:i:1}
        c="(${ch})"
        hebrew_key=$(xmodmap -pk | grep -i ${c} | awk '{print NR-1 "," $0}' | awk '{print $7}' )
        arr+=(${hebrew_key})
    done
    for key in "${arr[@]}"; do
        str+=${heb_dic["${key}"]}
    done
else
    for ((i=0;i<${#string}; i++));do
        ch=${string:i:1}
        for i  in ${heb[@]}; do
            echo ${i}
        str+=${i}
        #arr+=(${hebrew_key})
    done
fi

echo ${str[@]}











