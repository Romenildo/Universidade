import { BrowserRouter as Router, Switch, Route } from 'react-router-dom';
import Login from './Login';
import Registro from './Registro';
import TelaProfessor from './TelaProfessor';

import { history } from '../history';
import NotFound from './NotFound';
import './App.css'

const App = () => (
    <div className="App">
        <Router history={history}>
            <Switch>
                <Route exact path="/login">  
                   <Login />
                </Route>
                <Route exact path="/registro">
                    <Registro />
                </Route>
                <Route exact path="/telaprofessor">
                   <TelaProfessor/>
                </Route>
                <Route exact path="/">
                   Filha da puta
                </Route>
                <Route >
                   <NotFound/>
                </Route>
            </Switch>
        </Router>
    </div>
);

export default App;
