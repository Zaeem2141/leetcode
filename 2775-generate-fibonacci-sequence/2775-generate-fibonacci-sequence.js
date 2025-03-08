/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    let first=0 , second =1 ,temp=-1;
    while(true){
        yield first
        temp=first+second
        first=second
        second=temp
    }
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */