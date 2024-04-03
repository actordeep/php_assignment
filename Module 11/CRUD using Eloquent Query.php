<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use App\Models\Employee;

class EmployeeController extends Controller
{
    // Create operation
    public function create(Request $request)
    {
        $employee = new Employee();
        $employee->name = $request->input('name');
        $employee->email = $request->input('email');
        $employee->department = $request->input('department');
        $employee->save();

        return response()->json(['message' => 'Employee created successfully'], 201);
    }

    // Read operation
    public function read($id)
    {
        $employee = Employee::find($id);

        if (!$employee) {
            return response()->json(['message' => 'Employee not found'], 404);
        }

        return response()->json($employee, 200);
    }

    // Update operation
    public function update(Request $request, $id)
    {
        $employee = Employee::find($id);

        if (!$employee) {
            return response()->json(['message' => 'Employee not found'], 404);
        }

        $employee->name = $request->input('name');
        $employee->email = $request->input('email');
        $employee->department = $request->input('department');
        $employee->save();

        return response()->json(['message' => 'Employee updated successfully'], 200);
    }

    // Delete operation
    public function delete($id)
    {
        $employee = Employee::find($id);

        if (!$employee) {
            return response()->json(['message' => 'Employee not found'], 404);
        }

        $employee->delete();

        return response()->json(['message' => 'Employee deleted successfully'], 200);
    }
}
