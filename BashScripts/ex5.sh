#!/usr/bin/env bash
read -p "Enter the dirctory name:" DIR
paths=$(find /home/olga/Desktop -type d -name $DIR)
for path in ${paths}; do
    for file in $( ls -A ${path}); do
        file_name=${file}
        type=$( ls -ld ${path}/${file} | awk '{print $1}')
        file=$( ls -ld ${path}/${file} | awk '{print $9}')
        for (( i=0; i<=0; i++ )); do
            case ${type:$i:1} in
                -)
                    f="regular file"
                    ;;

                d)
                    f="directory"
                    ;;

                c)
                    f="character device file"
                    ;;

                b)
                    f="block device file"
                    ;;

                s)
                    f="local socket file"
                    ;;

                p)
                    f="named pipe"
                    ;;

                l)
                    f="symbolic link"
                    ;;
            esac            
        done
        echo ${f}, ${file##*/}
    done
done