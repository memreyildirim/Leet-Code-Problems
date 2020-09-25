# Read from the file words.txt and output the word frequency list to stdout.
# A pipeline for counting elemtns in words.txt
cat words.txt | tr -s ' ' '\n' | sort | uniq -c | sort -rn | awk '{print $2" "$1}'

