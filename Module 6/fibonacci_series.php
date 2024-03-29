<?php
function fibonacci($n) {
    $fib = array();
    $fib[0] = 0;
    $fib[1] = 1;
    for ($i = 2; $i < $n; $i++) {
        $fib[$i] = $fib[$i - 1] + $fib[$i - 2];
    }
    return $fib;
}

$n = 10;
$fib_series = fibonacci($n);

foreach ($fib_series as $num) {
    echo $num . " ";
}
?>
