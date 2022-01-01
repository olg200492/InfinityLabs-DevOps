#!/usr/bin/env bash

#read -p "Enter string in english:" string

string=$(xclip -o)
echo ${string}
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
heb_dic[0x0cee]="מ"
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
arr=()
str=()
for ((i=0;i<${#string}; i++));do
    ch=${string:i:1}
    c="(${ch})"
    hebrew_key=$(xmodmap -pk | grep -i ${c} | awk '{print NR-1 "," $0}' | awk '{print $7}' )
    arr+=(${hebrew_key})
done
#echo ${arr[@]}


for key in "${arr[@]}"; do
    str+=${heb_dic["${key}"]}
done
echo ${str[@]}

