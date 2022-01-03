#!/usr/bin/env bash


heb=('-' '=' '{' '}' '[' ']' '?' '|' '' '~' '"' '!' '&' '1' '2' '3' '4' '5' '6' '7' '8' '9' '0' '@' '#' '$' '%' '^' '&' '(' ')' '/' "'" 'ק' 'ר' 'א' 'ט' 'ו' 'ן' 'ם' 'פ' 'ש' 'ד' 'ג' 'כ' 'ע' 'י' 'ח' 'ל' 'ך' 'ף' 'ז' 'ס' 'ב' 'ה' 'נ' 'מ' 'צ' 'ת' 'ץ')
eng=('-' '=' '{' '}' '[' ']' '?' '|' '' '~' '"' '!' '&' '1' '2' '3' '4' '5' '6' '7' '8' '9' '0' '@' '#' '$' '%' '^' '&' '(' ')' 'q' 'w' 'e' 'r' 't' 'y' 'u' 'i' 'o' 'p' 'a' 's' 'd' 'f' 'g' 'h' 'j' 'k' 'l' ';' 'z' 'x' 'c' 'v' 'b' 'n' 'm' ',' '.')
#heb_eng[-]


read -p "Enter string :" str
word()
#echo $(/home/olga/src/xkblayout-state/xkblayout-state print %n)
if [[ $(/home/olga/src/xkblayout-state/xkblayout-state print %n) == "English" ]]
then
    for (( i=0;i<${#str}; i++ )); do
        for j in ${eng[@]}; do
            echo ${str:i:1}
            if [[ ${str:i:1} == ${eng[j]} ]]; then
                word+=${heb[i]}
            fi
        done
    done
else
    for i in "${eng[@]}"; do
        word+=${heb[i]}
    done
fi
echo ${word}