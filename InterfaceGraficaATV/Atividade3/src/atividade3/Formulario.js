import React from 'react';
import { Formik, Field, ErrorMessage } from 'formik';
import "./style.css";
import * as Yup from 'yup';


const Formulario = () => {
    const LoginSchema = Yup.object().shape({
         nome: Yup.string().required('Required'),
         idade: Yup.number().required('Required').positive("idade >0"),
         cpf: Yup.string().required('Required').matches(/^\d{3}\.\d{3}\.\d{3}\-\d{2}$/ , 'Formato CPF invalido'),
         matricula: Yup.string().required('Required'),
         curso: Yup.string().required('Required'),
         endereco: Yup.string().required('Required'),
         bairro: Yup.string().required('Required'),
         cidade: Yup.string().required('Required'),
         estado: Yup.string().required('Required').max(2,"Formato invalido").min(2,"formato invalido),
         cep:Yup.string().required('Required').matches(/^\d{5}-\d{3}$/ , 'Formato CEP invalido'),
    });
    const estadosUF= ["RO","AC","AM","RR","PA","AP","TO","MA","PI","CE","RN","PB","PE","AL",
                      "SE","BA","MG","ES","RJ","SP","PR","SC","RS","MS","MT","GO","DF"];
    const handleSubmitting = (values, { setSubmitting, setStatus }) => {
        setStatus({ isValidating: true });
        setTimeout(() => {
         console.info(JSON.stringify(values, null, 2));
         setSubmitting(false);
         setStatus({ isValidating: false });
     }, 400);
    };

    return (
        <div className="body">
            <div className="formulario">
            <Formik 
                 validationSchema={LoginSchema}
                 initialValues ={{nome: '', idade:'', cpf: '', matricula:'', curso:'', endereco:'',
                                  numeroEnd:'', complementoEnd:'', bairro:'', cidade:'', estado:'', cep:''}}
                 onSubmit ={handleSubmitting}>
            {({values, handleChange, handleSubmit,handleBlur, isSubmitting}) => (
                <form onSubmit={handleSubmit}>
                    <label className="Titulo">
                        Formulário
                    </label>
                    <br/>
                    <label className="subtitulo">
                        Campos com (*) são obrigatorios.
                    </label>
                    <br/>
                    <label className="nome">
                        Nome Completo*:
                            <Field type="text" name ="nome"
                                onBlur = {handleBlur}
                                onChange={handleChange}

                            />  
                            <ErrorMessage name ="nome"/> 
                    </label>
                    <br/>
                    <label>
                        Idade*:
                            <Field type="text" name ="idade"
                                onBlur = {handleBlur}
                                onChange={handleChange}
                            />  
                            <ErrorMessage name ="idade"/> 
                    </label>
                    <br/>
                    <label>
                        CPF*:
                            <Field type="text" name ="cpf"
                                onBlur = {handleBlur}
                                onChange={handleChange}
                            />  
                            <ErrorMessage name ="cpf"/> 
                    </label>
                    <br/>
                    <label>
                        Matricula*:
                            <Field type="text" name ="matricula"
                                onBlur = {handleBlur}
                                onChange={handleChange}
                            />  
                            <ErrorMessage name ="matricula"/> 
                    </label>
                    <br/>
                    <label>
                        Curso*:
                            <Field type="text" name ="curso"
                                onBlur = {handleBlur}
                                onChange={handleChange}
                            />  
                            <ErrorMessage name ="curso"/> 
                    </label>
                    <br/>
                    <label>
                        Endereco*:
                            <Field type="text" name ="endereco"
                                onBlur = {handleBlur}
                                onChange={handleChange}
                            />  
                            <ErrorMessage name ="endereco"/> 
                    </label>
                    <br/>
                    <label>
                        Numero:
                            <Field type="text" name ="numeroEnd"
                                onBlur = {handleBlur}
                                onChange={handleChange}
                            />  
                            <ErrorMessage name ="numeroEnd"/> 
                    </label>
                    <br/>
                    <label>
                        Complemento:
                            <Field type="text" name ="complementoEnd"
                                onBlur = {handleBlur}
                                onChange={handleChange}
                            />  
                            <ErrorMessage name ="complementoEnd"/> 
                    </label>
                    <br/>
                    <label>
                        Bairro*:
                            <Field type="text" name ="bairro"
                                onBlur = {handleBlur}
                                onChange={handleChange}
                            />  
                            <ErrorMessage name ="bairro"/> 
                    </label>
                    <br/>
                    <label>
                        Cidade*:
                            <Field type="text" name ="cidade"
                                onBlur = {handleBlur}
                                onChange={handleChange}
                            />  
                            <ErrorMessage name ="cidade"/> 
                    </label>
                    <br/>
                    <label>
                        Estado*:
                            <Field type="text" name ="estado"
                                    onBlur = {handleBlur}
                                    onChange={handleChange}
                                />  
                                <ErrorMessage name ="estado"/> 
                    </label>
                    <br/>
                    <label>
                        CEP*:
                            <Field type="text" name ="cep"
                                onBlur = {handleBlur}
                                onChange={handleChange}
                            />  
                            <ErrorMessage name ="cep"/> 
                    </label>
                    <br/>
                    <label>
                        <input className="botao" type="submit" value="Login" disabled={isSubmitting}/>   
                    </label>
                </form>
            )}
        </Formik>
            </div>
        </div>
        
    );
}

export default Formulario ;
