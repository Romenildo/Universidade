import {ErrorMessage, Formik, Form, Field} from 'formik'

import * as yup from 'yup'
import axios from 'axios';

import "./Login.css"
const Login = () => {
    const handleSubmit = values => {
        axios.post("http://localhost:3000/v1/api/auth",values)
            .then(resp => {
                const {data} = resp
                if(data){
                    localStorage.setItem('app-token',data)
                    history.push('/')
                }
            })
    }
    
    const validations = yup.object().shape({
        email: yup.string().email().required(),
        password: yup.string().required()
    })
    return(
        <>
        <h1>Login</h1>
        <p> clica nessa merda</p>
        
        <Formik 
        initialValues={{}} 
        onSubmit={handleSubmit}
        validationSchema={validations}
        >
            <Form className="Login">
                <div className='Login-Group'>
                    <Field 
                    name ="email"
                    className='Login-Field'
                    />
                    <ErrorMessage 
                        component ="span" 
                        name="email" 
                        className="Login-Error"
                    />
                </div>
                <div className='Login-Group'>
                    <Field 
                    type="password"
                    name ="password"
                    className='Login-Field'
                    />
                    <ErrorMessage 
                        component ="span" 
                        name="password" 
                        className="Login-Error"
                    />
                </div>
                <button className="Login-Btn" type="submit">Entrar</button>
            </Form>
        </Formik>
        </>
    )
};

export default Login;
