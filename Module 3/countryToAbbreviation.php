<?php

// Q16. Convert country’s name in abbreviate form 

function countryToAbbreviation($country) {
    $countryMappings = array(
        "United States" => "US",
        "United Kingdom" => "UK",
        "Canada" => "CA",
    );

    $country = ucwords(strtolower($country));

    if (isset($countryMappings[$country])) {
        return $countryMappings[$country]; 
    } else {
        return "N/A"; 
    }
}

$country = "United States";
echo "Abbreviation for $country is: " . countryToAbbreviation($country);
?>
