const isIsogram = str => {
    str = str.toLowerCase();
    for (let i=0 ; str.length > i ; i++){
        for(let j=1+i ; str.length > j ; j++ ){
            if ( str[i]==str[j] ){
                return false;
            }
        }
    }
    return true;
}

//isIsogram('isogram'); // true
//isIsogram('isIsogram'); // false