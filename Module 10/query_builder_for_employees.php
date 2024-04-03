<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;

class EmployeeController extends Controller
{
    // Create operation
    public function create(Request $request)
    {
        $name = $request->input('name');
        $email = $request->input('email');
        $department = $request->input('department');

        DB::table('employees')->insert([
            'name' => $name,
            'email' => $email,
            'department' => $department
        ]);

        return response()->json(['message' => 'Employee created successfully'], 201);
    }

    // Read operation
    public function read($id)
    {
        $employee = DB::table('employees')->where('id', $id)->first();

        if (!$employee) {
            return response()->json(['message' => 'Employee not found'], 404);
        }

        return response()->json($employee, 200);
    }

    // Update operation
    public function update(Request $request, $id)
    {
        $name = $request->input('name');
        $email = $request->input('email');
        $department = $request->input('department');

        DB::table('employees')->where('id', $id)->update([
            'name' => $name,
            'email' => $email,
            'department' => $department
        ]);

        return response()->json(['message' => 'Employee updated successfully'], 200);
    }

    // Delete operation
    public function delete($id)
    {
        DB::table('employees')->where('id', $id)->delete();

        return response()->json(['message' => 'Employee deleted successfully'], 200);
    }
}

// for web.php routes

// Route::post('/employees', 'EmployeeController@create');
// Route::get('/employees/{id}', 'EmployeeController@read');
// Route::put('/employees/{id}', 'EmployeeController@update');
// Route::delete('/employees/{id}', 'EmployeeController@delete');

