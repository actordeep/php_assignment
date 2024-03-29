<?php
$rows = 3;
$count = 5;

for ($i = 0; $i < $rows; $i++) {
    for ($j = 0; $j < $count; $j++) {
        echo ($i + 1) * 1000 + ($j + 1) * 99;
        if ($j != $count - 1) {
            echo " ";
        }
    }
    echo "\n";
}
?>
