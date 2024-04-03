<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;

class YourController extends Controller
{
    public function callStoredProcedure()
    {
        // Replace 'your_stored_procedure_name' with the name of your stored procedure
        $procedureName = 'your_stored_procedure_name';

        // Execute the stored procedure using the DB facade
        $results = DB::select("CALL $procedureName()");

        // Do something with the results, such as returning them
        return $results;
    }
}
