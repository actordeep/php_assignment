<?php
function isEven($num) {
    return !($num & 1);
}

function isOdd($num) {
    return $num & 1;
}

$num = 6; 
if (isEven($num)) {
    echo "$num is even.";
} else {
    echo "$num is odd.";
}
?>
