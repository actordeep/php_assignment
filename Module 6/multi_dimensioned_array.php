<?php

$balances = array(
    array(10.5, 20.3, 15.2, 18.6, 22.1),
    array(30.7, 25.9, 12.8, 17.4, 19.6),
    array(11.2, 14.5, 28.3, 23.9, 16.7)
);

foreach ($balances as $row) {
    foreach ($row as $value) {
        echo $value . " ";
    }
    echo "\n";
}
?>
