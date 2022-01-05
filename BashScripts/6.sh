#!/usr/bin/env bash
heb=('-' '=' '{' '}' '[' ']' '?' '|' '' '~' '"' '!' '&' '1' '2' '3' '4' '5' '6' '7' '8' '9' '0' '@' '#' '$' '%' '^' '&' '(' ')' '/' "'" 'ק' 'ר' 'א' 'ט' 'ו' 'ן' 'ם' 'פ' 'ש' 'ד' 'ג' 'כ' 'ע' 'י' 'ח' 'ל' 'ך' 'ף' 'ז' 'ס' 'ב' 'ה' 'נ' 'מ' 'צ' 'ת' 'ץ')
eng=('-' '=' '{' '}' '[' ']' '?' '|' '' '~' '"' '!' '&' '1' '2' '3' '4' '5' '6' '7' '8' '9' '0' '@' '#' '$' '%' '^' '&' '(' ')' 'q' 'w' 'e' 'r' 't' 'y' 'u' 'i' 'o' 'p' 'a' 's' 'd' 'f' 'g' 'h' 'j' 'k' 'l' ';' 'z' 'x' 'c' 'v' 'b' 'n' 'm' ',' '.')

x=""
toheb=0
a=$(xsel -ob)

a=$(echo "${a}" | grep -o .)

for i in "${!eng[@]}"; do
        if [[ "${a:$1:1}" == "${eng[$i]}" ]] ; then
            toheb=1
            break
        fi

done

if [ ${toheb} == "1" ]; then

    for letter in ${a[@]}; do
        for i in "${!eng[@]}"; do
            if [[ "$letter" == "${eng[$i]}" ]] ; then
                x=${x}${heb[$i]}
            fi
        done
    done
else
    for letter in ${a[@]}; do
        for i in "${!heb[@]}"; do
            if [[ "$letter" == "${heb[$i]}" ]] ; then
                x=${x}${eng[$i]}
            fi
        done
    done
fi
echo ${x}